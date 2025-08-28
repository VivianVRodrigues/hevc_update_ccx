// hevc_functions.h
#ifndef HEVC_FUNCTIONS_H
#define HEVC_FUNCTIONS_H

#include "ccx_decoders_common.h"

// Pure C entry point
size_t process_hevc(struct encoder_ctx *enc_ctx,
                    struct lib_cc_decode *dec_ctx,
                    unsigned char *hevcbuf,
                    size_t hevcbuflen,
                    struct cc_subtitle *sub);

#ifndef DISABLE_RUST
// Rust FFI entry point
size_t ccxr_process_hevc(struct encoder_ctx *enc_ctx,
                         struct lib_cc_decode *dec_ctx,
                         unsigned char *hevcbuf,
                         size_t hevcbuflen,
                         struct cc_subtitle *sub);
#endif

#endif 
