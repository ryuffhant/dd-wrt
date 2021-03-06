/* Generated by ./xlat/gen.sh from ./xlat/sg_io_dxfer_direction.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat sg_io_dxfer_direction[];

# else

static const struct xlat_data sg_io_dxfer_direction_xdata[] = {
#if defined(SG_DXFER_NONE) || (defined(HAVE_DECL_SG_DXFER_NONE) && HAVE_DECL_SG_DXFER_NONE)
  XLAT(SG_DXFER_NONE),
#endif
#if defined(SG_DXFER_TO_DEV) || (defined(HAVE_DECL_SG_DXFER_TO_DEV) && HAVE_DECL_SG_DXFER_TO_DEV)
  XLAT(SG_DXFER_TO_DEV),
#endif
#if defined(SG_DXFER_FROM_DEV) || (defined(HAVE_DECL_SG_DXFER_FROM_DEV) && HAVE_DECL_SG_DXFER_FROM_DEV)
  XLAT(SG_DXFER_FROM_DEV),
#endif
#if defined(SG_DXFER_TO_FROM_DEV) || (defined(HAVE_DECL_SG_DXFER_TO_FROM_DEV) && HAVE_DECL_SG_DXFER_TO_FROM_DEV)
  XLAT(SG_DXFER_TO_FROM_DEV),
#endif
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat sg_io_dxfer_direction[1] = { {
 .data = sg_io_dxfer_direction_xdata,
 .size = ARRAY_SIZE(sg_io_dxfer_direction_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
