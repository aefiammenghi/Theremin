Clock di sistema: 16 MHz

Distribuzione risorse:

TIMER6 -> timer per pilotaggio DAC
PA4: USCITA ANALOGICA DAC_OUT1

PA1: TIMER5 CH2 -> generazione onda quadra finestra temporale a 100ms (Counter period 160000)

PA5: TIMER2 ETR ->  Timer per cattura conteggi antenna pitch su etr e interrupt finestra temporale su CH2
PB3: TIMER2 CH2 -> Timer per cattura conteggi antenna pitch su etr e interrupt finestra temporale su CH2

PA1 deve essere collegato a PB3