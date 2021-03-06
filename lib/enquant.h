#if !defined(_enquant_H)
# define _enquant_H (1)
# include "quant.h"

/*The amount to scale the forward quantizer value by.*/
#define OC_FQUANT_SCALE ((ogg_uint32_t)1<<OC_FQUANT_SHIFT)
/*The amount to add to the scaled forward quantizer for rounding.*/
#define OC_FQUANT_ROUND (1<<OC_FQUANT_SHIFT-1)
/*The amount to shift the resulting product by.*/
#define OC_FQUANT_SHIFT (16)



/*The default quantization parameters used by VP3.1.*/
extern const th_quant_info TH_VP31_QUANT_INFO;
/*Our default quantization parameters.*/
extern const th_quant_info OC_DEF_QUANT_INFO[4];



void oc_quant_params_pack(oggpack_buffer *_opb,const th_quant_info *_qinfo);
void oc_enquant_tables_init(oc_quant_table *_dequant[2][3],
 oc_quant_table *_enquant[2][3],const th_quant_info *_qinfo);

#endif
