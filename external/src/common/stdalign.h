#ifndef P2POOL_EXTERNAL_SRC_COMMON_STDALIGN_H
#define P2POOL_EXTERNAL_SRC_COMMON_STDALIGN_H

#if !defined(__cplusplus) && defined(_MSC_VER) && (_MSC_VER < 1930)
#define alignas(x) __declspec(align(x))
#define alignof __alignof
#endif

#endif // P2POOL_EXTERNAL_SRC_COMMON_STDALIGN_H
