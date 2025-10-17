#ifndef AIOC_H_
#define AIOC_H_

#define AIOC_IRQ_PRIO_LED        7
#define AIOC_IRQ_PRIO_SYSTICK    6
#define AIOC_IRQ_PRIO_IO         5
#define AIOC_IRQ_PRIO_USB        4
#define AIOC_IRQ_PRIO_SERIAL     3
#define AIOC_IRQ_PRIO_AUDIO      2

#define AIOC_DEFAULT_PTT_SOURCE  AIOC_PTT_SRC_RTS
#define AIOC_PTT_POLARITY_ACTIVE_HIGH  // i.e. RTS high = PTT

#endif /* AIOC_H_ */
