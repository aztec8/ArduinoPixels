//generated pixeldata
#ifndef _DataThreeFar_h
#define _DataThreeFar_h
#include "PixelData.h"
class DataThreeFar:public PixelData{ 
public:
    DataThreeFar()
   {
       width =7;
        height=9;
       centerX=3;
        centerY=9;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=255;
        indices[1]=0;
        indices[2]=0;
        indices[3]=0;
        indices[4]=4;
        indices[5]=4;
        indices[6]=255;
        indices[7]=255;
        indices[8]=0;
        indices[9]=8;
        indices[10]=8;
        indices[11]=0;
        indices[12]=4;
        indices[13]=4;
        indices[14]=4;
        indices[15]=8;
        indices[16]=4;
        indices[17]=0;
        indices[18]=4;
        indices[19]=4;
        indices[20]=255;
        indices[21]=255;
        indices[22]=4;
        indices[23]=0;
        indices[24]=4;
        indices[25]=4;
        indices[26]=4;
        indices[27]=4;
        indices[28]=255;
        indices[29]=255;
        indices[30]=4;
        indices[31]=4;
        indices[32]=4;
        indices[33]=4;
        indices[34]=255;
        indices[35]=255;
        indices[36]=255;
        indices[37]=255;
        indices[38]=12;
        indices[39]=255;
        indices[40]=255;
        indices[41]=255;
        indices[42]=255;
        indices[43]=255;
        indices[44]=255;
        indices[45]=16;
        indices[46]=255;
        indices[47]=255;
        indices[48]=255;
        indices[49]=255;
        indices[50]=255;
        indices[51]=255;
        indices[52]=12;
        indices[53]=255;
        indices[54]=255;
        indices[55]=255;
        indices[56]=255;
        indices[57]=255;
        indices[58]=255;
        indices[59]=12;
        indices[60]=255;
        indices[61]=255;
        indices[62]=255;
        color= new uint8_t[20];
        color[0] =141;
        color[1] =180;
        color[2] =118;
        color[3] =255;
        color[4] =111;
        color[5] =144;
        color[6] =93;
        color[7] =255;
        color[8] =169;
        color[9] =200;
        color[10] =150;
        color[11] =255;
        color[12] =69;
        color[13] =52;
        color[14] =44;
        color[15] =255;
        color[16] =94;
        color[17] =71;
        color[18] =59;
        color[19] =255;
   };
};
#endif
