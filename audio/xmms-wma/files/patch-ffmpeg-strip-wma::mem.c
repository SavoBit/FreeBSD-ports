--- ffmpeg-strip-wma/mem.c	Thu Mar  6 14:32:02 2003
+++ ffmpeg-strip-wma/mem.c	Thu Mar 11 18:36:40 2004
@@ -29,9 +29,9 @@
 #undef free
 #undef realloc
 
-#ifdef HAVE_MALLOC_H
-#include <malloc.h>
-#endif
+#include <stdlib.h>
+
+#undef HAVE_MEMALIGN
 
 /* you can redefine av_malloc and av_free in your project to use your
    memory allocator. You do not need to suppress this file because the
