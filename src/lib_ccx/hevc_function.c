// hevc_functions.c
#include "hevc_functions.h"

size_t process_hevc(struct encoder_ctx *enc_ctx,
                    struct lib_cc_decode *dec_ctx,
                    unsigned char *hevcbuf,
                    size_t hevcbuflen,
                    struct cc_subtitle *sub)
{
#ifndef DISABLE_RUST
    // Forward to Rust implementation
    return ccxr_process_hevc(enc_ctx, dec_ctx, hevcbuf, hevcbuflen, sub);
#else
    //needs to be updated
    
#endif
}
