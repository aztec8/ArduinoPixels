//generated pixeldata
#ifndef _DataManCrouchBlock_h
#define _DataManCrouchBlock_h
#include "PixelData.h"
class DataManCrouchBlock:public PixelData{ 
public:
    DataManCrouchBlock()
   {
       width =6;
        height=8;
       centerX=3;
        centerY=8;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=255;
        indices[1]=0;
        indices[2]=0;
        indices[3]=0;
        indices[4]=0;
        indices[5]=255;
        indices[6]=255;
        indices[7]=0;
        indices[8]=0;
        indices[9]=0;
        indices[10]=0;
        indices[11]=255;
        indices[12]=0;
        indices[13]=0;
        indices[14]=0;
        indices[15]=0;
        indices[16]=0;
        indices[17]=0;
        indices[18]=255;
        indices[19]=4;
        indices[20]=4;
        indices[21]=4;
        indices[22]=4;
        indices[23]=255;
        indices[24]=255;
        indices[25]=4;
        indices[26]=0;
        indices[27]=4;
        indices[28]=0;
        indices[29]=255;
        indices[30]=255;
        indices[31]=4;
        indices[32]=4;
        indices[33]=4;
        indices[34]=4;
        indices[35]=4;
        indices[36]=255;
        indices[37]=8;
        indices[38]=8;
        indices[39]=8;
        indices[40]=8;
        indices[41]=4;
        indices[42]=0;
        indices[43]=255;
        indices[44]=255;
        indices[45]=255;
        indices[46]=0;
        indices[47]=255;
        color= new uint8_t[12];
        color[0] =0;
        color[1] =0;
        color[2] =0;
        color[3] =255;
        color[4] =255;
        color[5] =198;
        color[6] =135;
        color[7] =255;
        color[8] =34;
        color[9] =59;
        color[10] =169;
        color[11] =255;
   };
};
#endif
