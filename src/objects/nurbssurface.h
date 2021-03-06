/****************************************************************************

         SplineSurface Class
         Copyright (C) 2012 Andre Deperrois 
         All rights reserved

*****************************************************************************/


#ifndef SPLINESURFACE_H
#define SPLINESURFACE_H


//#include "../params.h"
#include "frame.h"

#define MAXVLINES      17
#define MAXULINES      19

class NURBSSurface
{

public:
    NURBSSurface(int iAxis=0);
    void SetKnots();
    double Getu(double pos, double v);
    double Getv(double u, Vector3d r);
    void GetPoint(double u, double v, Vector3d &Pt);
    bool IntersectNURBS(Vector3d A, Vector3d B, Vector3d &I);
    int SetvDegree(int nvDegree);
    int SetuDegree(int nuDegree);

    void ClearFrames();
    void RemoveFrame(int iFrame);
    void InsertFrame(CFrame *pNewFrame);
    CFrame *AppendFrame();

    Vector3d LeadingEdgeAxis();

    double Weight(const double &d, int const &i, int const &N);

    int FrameSize() {return m_pFrame.size();};
    int FramePointCount() {return m_pFrame.first()->PointCount();};


    static void* s_pMainFrame;

//    int m_nuLines;            // the number of stations along the u-axis where the frames are defined
//    int m_nvLines;          // the number of control points in each frame
    int m_iuDegree, m_ivDegree, m_nuKnots, m_nvKnots;

    double m_uKnots[MAXVLINES*2];
    double m_vKnots[MAXULINES*2];

    int m_uPanels[MAXVLINES];
    int m_vPanels[MAXULINES];

    int m_iRes;
    int m_NElements;// = m_nxPanels * m_nhPanels *2
    int m_nuPanels, m_nvPanels;
    int m_np;

    double m_Bunch;
    double m_EdgeWeightu, m_EdgeWeightv; // for a full NURBS. Unused, though, not practical

    QList<CFrame*> m_pFrame;    // the frames at the stations

    //allocate temporary variables to
    //avoid lengthy memory allocation times on the stack
    double value, eps, bs, cs;
    Vector3d t_R, t_Prod, t_Q, t_r, t_N;

//    double m_vPanelPos[300];

    int m_uAxis, m_vAxis;
};

#endif // SPLINESURFACE_H
