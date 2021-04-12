/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v1.3.0.10) *
 *******************************************************************/
#ifndef __wrappedbz2TYPES_H_
#define __wrappedbz2TYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef int64_t (*iFp_t)(void*);
typedef int64_t (*iFpi_t)(void*, int64_t);
typedef int64_t (*iFpii_t)(void*, int64_t, int64_t);
typedef int64_t (*iFpiii_t)(void*, int64_t, int64_t, int64_t);

#define SUPER() ADDED_FUNCTIONS() \
	GO(BZ2_bzCompressEnd, iFp_t) \
	GO(BZ2_bzDecompress, iFp_t) \
	GO(BZ2_bzDecompressEnd, iFp_t) \
	GO(BZ2_bzCompress, iFpi_t) \
	GO(BZ2_bzDecompressInit, iFpii_t) \
	GO(BZ2_bzCompressInit, iFpiii_t)

#endif // __wrappedbz2TYPES_H_