/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Compiler.h
 *       Module:  -
 *
 *  Description:  Contains Compiler Dependent MACRO Definition
 *
 *********************************************************************************************************************/

#ifndef COMMON_COMPILER_H_
#define COMMON_COMPILER_H_

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
/* NULL_PTR define with a void pointer to zero definition*/
#define NULL_PTR       ((void *)0)

/* INLINE  define for abstraction of the keyword inline*/
#define INLINE         inline

/* LOCAL_INLINE define for abstraction of the keyword inline in functions with "static" scope.
   Different compilers may require a different sequence of the keywords "static" and "inline"
   if this is supported at all. */
#define LOCAL_INLINE   static inline

#endif /* COMMON_COMPILER_H_ */
