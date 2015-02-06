#ifndef _MEMORYSAVER_
#define _MEMORYSAVER_

//Uncomment the following definition when you use them
//#define OV7660_CAM
//#define OV7725_CAM
//#define OV7670_CAM
//#define OV7675_CAM
#define OV2640_CAM
//#define OV3640_CAM
#define OV5642_CAM
//#define MT9D111_CAM


#if defined OV7660_CAM	
	#include "ov7660_regs.h"
#endif

#if defined OV7725_CAM	
	#include "ov7725_regs.h"
#endif

#if defined OV7670_CAM	
	#include "ov7670_regs.h"
#endif

#if defined OV7675_CAM
	#include "ov7675_regs.h"
#endif

#if defined OV5642_CAM	
	#include "ov5642_regs.h"
#endif

#if defined OV3640_CAM	
	#include "ov3640_regs.h"
#endif

#if defined OV2640_CAM
	#include "ov2640_regs.h"
#endif

#if defined MT9D111_CAM	
	#include "mt9d111_regs.h"
#endif

#endif	//_MEMORYSAVER_
