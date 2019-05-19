#ifndef _ESM_H
#define _ESM_H
/*
 * Event Stream Model (ESM): Push model for input events.
 * Currently only works for certain mouse events.
 *
 * Dustin Colten McAfee <dmcafee2@my.utk.edu> <dustin.mcafee@my.maryvillecollege.edu>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as published by
 * the Free Software Foundation.
 */

//#include <linux/types.h>

#include <sys/types.h>
#ifndef _DRM_H_
typedef int16_t __s16;
typedef uint16_t __u16;
typedef int32_t __s32;
typedef uint32_t __u32;
#endif //_DRM_H

typedef void (*event_handler_t)(__u16, __u16, __s32);

#endif //_ESM_H
