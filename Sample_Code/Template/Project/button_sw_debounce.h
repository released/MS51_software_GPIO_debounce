/*_____ I N C L U D E S ____________________________________________________*/
#include <stdio.h>

/*_____ D E C L A R A T I O N S ____________________________________________*/

/*_____ D E F I N I T I O N S ______________________________________________*/


// button , schematic : pull LOW
#define BTN2                                            (P04)

// button , schematic : pull HIGH
#define BTN1                                            (P05)

#ifndef ACTIVE_LOW
#define ACTIVE_LOW              					    (0)
#endif

#ifndef ACTIVE_HIGH
#define ACTIVE_HIGH              					    (1)
#endif

#ifndef HIGH
#define HIGH              					            (1)
#endif

#ifndef LOW
#define LOW              					            (0)
#endif

#ifndef PRESSED
#define PRESSED              					        (1)
#endif

#ifndef RELEASED
#define RELEASED              					        (0)
#endif

/*_____ M A C R O S ________________________________________________________*/

/*_____ F U N C T I O N S __________________________________________________*/

void btn_timer_irq(void);
void btn_task(void);
void btn_init(void);

