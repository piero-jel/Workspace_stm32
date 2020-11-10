/* Indicamos que utilizamos la sintaxys unificada */
	.syntax unified
/*
//
*/
/***********************************************************************************
 *
 * begin function : int32_t sendSemihost(uint32_t command, void *data)
 * int32_t semihostCommand(uint32_t cmd, void * data)
 ***********************************************************************************/
	.global chip_semihost_cmd
	.text
	.thumb_func
chip_semihost_cmd:
	push {lr}
	bkpt 0xAB
	pop {pc}
	.end
/***********************************************************************************
 *
 * End function : int32_t sendSemihost(uint32_t command, void *data)
 *
 ***********************************************************************************/
