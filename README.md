# MS51_software_GPIO_debounce
 MS51_software_GPIO_debounce

update @ 2024/08/07

1. use MS51 EVB , to test external button

- P05 : connect to a button with pull HIGH

- P04 : connect to a button with pull LOW

2. button scenario

- under timer IRQ , detect button pressed status and execute tick counting (check define : USE_DEBOUNCE_80MS)

- under loop , detect button status after debouce timing (short press , long press)

![image](https://github.com/released/MS51_software_GPIO_debounce/blob/main/log.jpg)
