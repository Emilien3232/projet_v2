#ifndef _BOULE_H
#define _BOULE_H

#include "Vec2.h"

struct boule{
    int IDnombre;
    float diam ;
    float masse ; 
    Vec2 positionBoule;
    Vec2 vitesseBoule;

    boule() : IDnombre(0) , diam(0.f) , masse(0.f) , positionBoule(Vec2(0,0)), vitesseBoule(Vec2(0,0)) {}
    boule(int nIDnombre , float nrayon , float nmasse , Vec2 npositionBoule , Vec2 nvitesseBoule) : 
        IDnombre(nIDnombre) , diam(nrayon) , masse(nmasse) , positionBoule(npositionBoule) , vitesseBoule(nvitesseBoule)  {}
    
};

#endif
