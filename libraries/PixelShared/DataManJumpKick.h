//generated pixeldata
#ifndef _DataManJumpKick_h
#define _DataManJumpKick_h
#include "PixelData.h"
class DataManJumpKick:public PixelData{ 
public:
    DataManJumpKick()
   {
       width =8;
        height=10;
       centerX=4;
        centerY=10;
        int size =width*height;
        indices= new uint8_t[size];
        indices[0]=255;
        indices[1]=255;
        indices[2]=0;
        indices[3]=0;
        indices[4]=0;
        indices[5]=255;
        indices[6]=255;
        indices[7]=255;
        indices[8]=255;
        indices[9]=0;
        indices[10]=0;
        indices[11]=0;
        indices[12]=0;
        indices[13]=255;
        indices[14]=255;
        indices[15]=255;
        indices[16]=255;
        indices[17]=0;
        indices[18]=0;
        indices[19]=0;
        indices[20]=0;
        indices[21]=0;
        indices[22]=255;
        indices[23]=255;
        indices[24]=0;
        indices[25]=0;
        indices[26]=0;
        indices[27]=4;
        indices[28]=4;
        indices[29]=255;
        indices[30]=255;
        indices[31]=255;
        indices[32]=255;
        indices[33]=4;
        indices[34]=4;
        indices[35]=4;
        indices[36]=0;
        indices[37]=255;
        indices[38]=255;
        indices[39]=255;
        indices[40]=255;
        indices[41]=4;
        indices[42]=0;
        indices[43]=4;
        indices[44]=4;
        indices[45]=255;
        indices[46]=255;
        indices[47]=255;
        indices[48]=255;
        indices[49]=4;
        indices[50]=4;
        indices[51]=4;
        indices[52]=8;
        indices[53]=4;
        indices[54]=255;
        indices[55]=255;
        indices[56]=255;
        indices[57]=8;
        indices[58]=8;
        indices[59]=8;
        indices[60]=8;
        indices[61]=0;
        indices[62]=0;
        indices[63]=0;
        indices[64]=4;
        indices[65]=0;
        indices[66]=0;
        indices[67]=0;
        indices[68]=0;
        indices[69]=255;
        indices[70]=255;
        indices[71]=255;
        indices[72]=255;
        indices[73]=0;
        indices[74]=255;
        indices[75]=255;
        indices[76]=255;
        indices[77]=255;
        indices[78]=255;
        indices[79]=255;
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
