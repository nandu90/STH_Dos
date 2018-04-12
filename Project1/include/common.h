
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   common.h
 * Author: nsaini3
 *
 * Created on October 27, 2016, 1:44 PM
 */

#ifndef COMMON_H
#define COMMON_H

///Standard Libraries to include
#define PI 3.1415926535897
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <fenv.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <time.h>
#include <omp.h>
#include <mpi.h>
#include <string.h>
#include <stdbool.h>
#include <dirent.h>

//------------------------------------------------------------------------//

//All input variables to be read are collected in a separate file
//The input file is included in common.h so that you don't have to call both files - just common.h"
#include "input.h"
//------------------------------------------------------------------------//

//------------------------------------------------------------------------//
//MPI Relevant variables
int master;
int nprocs;
int myrank;

//------------------------------------------------------------------------//










#endif /* COMMON_H */
