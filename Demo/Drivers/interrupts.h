/**
 *	Tiny Interrupt Manager
 *
 *	@author James Walmsley <james@fullfat-fs.co.uk>
 *	This code is licensed under the GNU GPLv3 license.
 **/

#ifndef _INTERRUPTS_H_
#define _INTERRUPTS_H_

typedef void (*FN_INTERRUPT_HANDLER) (unsigned int irq, void *pParam);

typedef struct {
	FN_INTERRUPT_HANDLER 	pfnHandler;			///< Function that handles this IRQn
	void 				   *pParam;				///< A special parameter that the use can pass to the IRQ.
} INTERRUPT_VECTOR;

void RegisterInterrupt		(const unsigned int irq, FN_INTERRUPT_HANDLER pfnHandler, void *pParam);
void EnableInterrupt		(const unsigned int irq);
void DisableInterrupt		(const unsigned int irq);
void EnableInterrupts		(void);
void DisableInterrupts		(void);

#endif
