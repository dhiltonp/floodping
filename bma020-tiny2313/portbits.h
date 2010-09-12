
struct bits {
	char b0:1;
	char b1:1;
	char b2:1;
	char b3:1;
	char b4:1;
	char b5:1;
	char b6:1;
	char b7:1;
} __attribute__((__packed__));

#define PORTA_0 ((*(volatile struct bits*)&PORTA).b0)
#define PORTA_1 ((*(volatile struct bits*)&PORTA).b1)
#define PORTA_2 ((*(volatile struct bits*)&PORTA).b2)
#define PORTA_3 ((*(volatile struct bits*)&PORTA).b3)
#define PORTA_4 ((*(volatile struct bits*)&PORTA).b4)
#define PORTA_5 ((*(volatile struct bits*)&PORTA).b5)
#define PORTA_6 ((*(volatile struct bits*)&PORTA).b6)
#define PORTA_7 ((*(volatile struct bits*)&PORTA).b7)

#define PORTB_0 ((*(volatile struct bits*)&PORTB).b0)
#define PORTB_1 ((*(volatile struct bits*)&PORTB).b1)
#define PORTB_2 ((*(volatile struct bits*)&PORTB).b2)
#define PORTB_3 ((*(volatile struct bits*)&PORTB).b3)
#define PORTB_4 ((*(volatile struct bits*)&PORTB).b4)
#define PORTB_5 ((*(volatile struct bits*)&PORTB).b5)
#define PORTB_6 ((*(volatile struct bits*)&PORTB).b6)
#define PORTB_7 ((*(volatile struct bits*)&PORTB).b7)

#define PORTC_0 ((*(volatile struct bits*)&PORTC).b0)
#define PORTC_1 ((*(volatile struct bits*)&PORTC).b1)
#define PORTC_2 ((*(volatile struct bits*)&PORTC).b2)
#define PORTC_3 ((*(volatile struct bits*)&PORTC).b3)
#define PORTC_4 ((*(volatile struct bits*)&PORTC).b4)
#define PORTC_5 ((*(volatile struct bits*)&PORTC).b5)
#define PORTC_6 ((*(volatile struct bits*)&PORTC).b6)
#define PORTC_7 ((*(volatile struct bits*)&PORTC).b7)

#define PORTD_0 ((*(volatile struct bits*)&PORTD).b0)
#define PORTD_1 ((*(volatile struct bits*)&PORTD).b1)
#define PORTD_2 ((*(volatile struct bits*)&PORTD).b2)
#define PORTD_3 ((*(volatile struct bits*)&PORTD).b3)
#define PORTD_4 ((*(volatile struct bits*)&PORTD).b4)
#define PORTD_5 ((*(volatile struct bits*)&PORTD).b5)
#define PORTD_6 ((*(volatile struct bits*)&PORTD).b6)
#define PORTD_7 ((*(volatile struct bits*)&PORTD).b7)

#define PORTE_0 ((*(volatile struct bits*)&PORTE).b0)
#define PORTE_1 ((*(volatile struct bits*)&PORTE).b1)
#define PORTE_2 ((*(volatile struct bits*)&PORTE).b2)
#define PORTE_3 ((*(volatile struct bits*)&PORTE).b3)
#define PORTE_4 ((*(volatile struct bits*)&PORTE).b4)
#define PORTE_5 ((*(volatile struct bits*)&PORTE).b5)
#define PORTE_6 ((*(volatile struct bits*)&PORTE).b6)
#define PORTE_7 ((*(volatile struct bits*)&PORTE).b7)

#define PORTF_0 ((*(volatile struct bits*)&PORTF).b0)
#define PORTF_1 ((*(volatile struct bits*)&PORTF).b1)
#define PORTF_2 ((*(volatile struct bits*)&PORTF).b2)
#define PORTF_3 ((*(volatile struct bits*)&PORTF).b3)
#define PORTF_4 ((*(volatile struct bits*)&PORTF).b4)
#define PORTF_5 ((*(volatile struct bits*)&PORTF).b5)
#define PORTF_6 ((*(volatile struct bits*)&PORTF).b6)
#define PORTF_7 ((*(volatile struct bits*)&PORTF).b7)

#define PORTG_0 ((*(volatile struct bits*)&PORTG).b0)
#define PORTG_1 ((*(volatile struct bits*)&PORTG).b1)
#define PORTG_2 ((*(volatile struct bits*)&PORTG).b2)
#define PORTG_3 ((*(volatile struct bits*)&PORTG).b3)
#define PORTG_4 ((*(volatile struct bits*)&PORTG).b4)
#define PORTG_5 ((*(volatile struct bits*)&PORTG).b5)
#define PORTG_6 ((*(volatile struct bits*)&PORTG).b6)
#define PORTG_7 ((*(volatile struct bits*)&PORTG).b7)

#define PORTH_0 ((*(volatile struct bits*)&PORTH).b0)
#define PORTH_1 ((*(volatile struct bits*)&PORTH).b1)
#define PORTH_2 ((*(volatile struct bits*)&PORTH).b2)
#define PORTH_3 ((*(volatile struct bits*)&PORTH).b3)
#define PORTH_4 ((*(volatile struct bits*)&PORTH).b4)
#define PORTH_5 ((*(volatile struct bits*)&PORTH).b5)
#define PORTH_6 ((*(volatile struct bits*)&PORTH).b6)
#define PORTH_7 ((*(volatile struct bits*)&PORTH).b7)


#define DDRA_0 ((*(volatile struct bits*)&DDRA).b0)
#define DDRA_1 ((*(volatile struct bits*)&DDRA).b1)
#define DDRA_2 ((*(volatile struct bits*)&DDRA).b2)
#define DDRA_3 ((*(volatile struct bits*)&DDRA).b3)
#define DDRA_4 ((*(volatile struct bits*)&DDRA).b4)
#define DDRA_5 ((*(volatile struct bits*)&DDRA).b5)
#define DDRA_6 ((*(volatile struct bits*)&DDRA).b6)
#define DDRA_7 ((*(volatile struct bits*)&DDRA).b7)

#define DDRB_0 ((*(volatile struct bits*)&DDRB).b0)
#define DDRB_1 ((*(volatile struct bits*)&DDRB).b1)
#define DDRB_2 ((*(volatile struct bits*)&DDRB).b2)
#define DDRB_3 ((*(volatile struct bits*)&DDRB).b3)
#define DDRB_4 ((*(volatile struct bits*)&DDRB).b4)
#define DDRB_5 ((*(volatile struct bits*)&DDRB).b5)
#define DDRB_6 ((*(volatile struct bits*)&DDRB).b6)
#define DDRB_7 ((*(volatile struct bits*)&DDRB).b7)

#define DDRC_0 ((*(volatile struct bits*)&DDRC).b0)
#define DDRC_1 ((*(volatile struct bits*)&DDRC).b1)
#define DDRC_2 ((*(volatile struct bits*)&DDRC).b2)
#define DDRC_3 ((*(volatile struct bits*)&DDRC).b3)
#define DDRC_4 ((*(volatile struct bits*)&DDRC).b4)
#define DDRC_5 ((*(volatile struct bits*)&DDRC).b5)
#define DDRC_6 ((*(volatile struct bits*)&DDRC).b6)
#define DDRC_7 ((*(volatile struct bits*)&DDRC).b7)

#define DDRD_0 ((*(volatile struct bits*)&DDRD).b0)
#define DDRD_1 ((*(volatile struct bits*)&DDRD).b1)
#define DDRD_2 ((*(volatile struct bits*)&DDRD).b2)
#define DDRD_3 ((*(volatile struct bits*)&DDRD).b3)
#define DDRD_4 ((*(volatile struct bits*)&DDRD).b4)
#define DDRD_5 ((*(volatile struct bits*)&DDRD).b5)
#define DDRD_6 ((*(volatile struct bits*)&DDRD).b6)
#define DDRD_7 ((*(volatile struct bits*)&DDRD).b7)

#define DDRE_0 ((*(volatile struct bits*)&DDRE).b0)
#define DDRE_1 ((*(volatile struct bits*)&DDRE).b1)
#define DDRE_2 ((*(volatile struct bits*)&DDRE).b2)
#define DDRE_3 ((*(volatile struct bits*)&DDRE).b3)
#define DDRE_4 ((*(volatile struct bits*)&DDRE).b4)
#define DDRE_5 ((*(volatile struct bits*)&DDRE).b5)
#define DDRE_6 ((*(volatile struct bits*)&DDRE).b6)
#define DDRE_7 ((*(volatile struct bits*)&DDRE).b7)

#define DDRF_0 ((*(volatile struct bits*)&DDRF).b0)
#define DDRF_1 ((*(volatile struct bits*)&DDRF).b1)
#define DDRF_2 ((*(volatile struct bits*)&DDRF).b2)
#define DDRF_3 ((*(volatile struct bits*)&DDRF).b3)
#define DDRF_4 ((*(volatile struct bits*)&DDRF).b4)
#define DDRF_5 ((*(volatile struct bits*)&DDRF).b5)
#define DDRF_6 ((*(volatile struct bits*)&DDRF).b6)
#define DDRF_7 ((*(volatile struct bits*)&DDRF).b7)

#define DDRG_0 ((*(volatile struct bits*)&DDRG).b0)
#define DDRG_1 ((*(volatile struct bits*)&DDRG).b1)
#define DDRG_2 ((*(volatile struct bits*)&DDRG).b2)
#define DDRG_3 ((*(volatile struct bits*)&DDRG).b3)
#define DDRG_4 ((*(volatile struct bits*)&DDRG).b4)
#define DDRG_5 ((*(volatile struct bits*)&DDRG).b5)
#define DDRG_6 ((*(volatile struct bits*)&DDRG).b6)
#define DDRG_7 ((*(volatile struct bits*)&DDRG).b7)

#define DDRH_0 ((*(volatile struct bits*)&DDRH).b0)
#define DDRH_1 ((*(volatile struct bits*)&DDRH).b1)
#define DDRH_2 ((*(volatile struct bits*)&DDRH).b2)
#define DDRH_3 ((*(volatile struct bits*)&DDRH).b3)
#define DDRH_4 ((*(volatile struct bits*)&DDRH).b4)
#define DDRH_5 ((*(volatile struct bits*)&DDRH).b5)
#define DDRH_6 ((*(volatile struct bits*)&DDRH).b6)
#define DDRH_7 ((*(volatile struct bits*)&DDRH).b7)


#define PINA_0 ((*(volatile struct bits*)&PINA).b0)
#define PINA_1 ((*(volatile struct bits*)&PINA).b1)
#define PINA_2 ((*(volatile struct bits*)&PINA).b2)
#define PINA_3 ((*(volatile struct bits*)&PINA).b3)
#define PINA_4 ((*(volatile struct bits*)&PINA).b4)
#define PINA_5 ((*(volatile struct bits*)&PINA).b5)
#define PINA_6 ((*(volatile struct bits*)&PINA).b6)
#define PINA_7 ((*(volatile struct bits*)&PINA).b7)

#define PINB_0 ((*(volatile struct bits*)&PINB).b0)
#define PINB_1 ((*(volatile struct bits*)&PINB).b1)
#define PINB_2 ((*(volatile struct bits*)&PINB).b2)
#define PINB_3 ((*(volatile struct bits*)&PINB).b3)
#define PINB_4 ((*(volatile struct bits*)&PINB).b4)
#define PINB_5 ((*(volatile struct bits*)&PINB).b5)
#define PINB_6 ((*(volatile struct bits*)&PINB).b6)
#define PINB_7 ((*(volatile struct bits*)&PINB).b7)

#define PINC_0 ((*(volatile struct bits*)&PINC).b0)
#define PINC_1 ((*(volatile struct bits*)&PINC).b1)
#define PINC_2 ((*(volatile struct bits*)&PINC).b2)
#define PINC_3 ((*(volatile struct bits*)&PINC).b3)
#define PINC_4 ((*(volatile struct bits*)&PINC).b4)
#define PINC_5 ((*(volatile struct bits*)&PINC).b5)
#define PINC_6 ((*(volatile struct bits*)&PINC).b6)
#define PINC_7 ((*(volatile struct bits*)&PINC).b7)

#define PIND_0 ((*(volatile struct bits*)&PIND).b0)
#define PIND_1 ((*(volatile struct bits*)&PIND).b1)
#define PIND_2 ((*(volatile struct bits*)&PIND).b2)
#define PIND_3 ((*(volatile struct bits*)&PIND).b3)
#define PIND_4 ((*(volatile struct bits*)&PIND).b4)
#define PIND_5 ((*(volatile struct bits*)&PIND).b5)
#define PIND_6 ((*(volatile struct bits*)&PIND).b6)
#define PIND_7 ((*(volatile struct bits*)&PIND).b7)

#define PINE_0 ((*(volatile struct bits*)&PINE).b0)
#define PINE_1 ((*(volatile struct bits*)&PINE).b1)
#define PINE_2 ((*(volatile struct bits*)&PINE).b2)
#define PINE_3 ((*(volatile struct bits*)&PINE).b3)
#define PINE_4 ((*(volatile struct bits*)&PINE).b4)
#define PINE_5 ((*(volatile struct bits*)&PINE).b5)
#define PINE_6 ((*(volatile struct bits*)&PINE).b6)
#define PINE_7 ((*(volatile struct bits*)&PINE).b7)

#define PINF_0 ((*(volatile struct bits*)&PINF).b0)
#define PINF_1 ((*(volatile struct bits*)&PINF).b1)
#define PINF_2 ((*(volatile struct bits*)&PINF).b2)
#define PINF_3 ((*(volatile struct bits*)&PINF).b3)
#define PINF_4 ((*(volatile struct bits*)&PINF).b4)
#define PINF_5 ((*(volatile struct bits*)&PINF).b5)
#define PINF_6 ((*(volatile struct bits*)&PINF).b6)
#define PINF_7 ((*(volatile struct bits*)&PINF).b7)

#define PING_0 ((*(volatile struct bits*)&PING).b0)
#define PING_1 ((*(volatile struct bits*)&PING).b1)
#define PING_2 ((*(volatile struct bits*)&PING).b2)
#define PING_3 ((*(volatile struct bits*)&PING).b3)
#define PING_4 ((*(volatile struct bits*)&PING).b4)
#define PING_5 ((*(volatile struct bits*)&PING).b5)
#define PING_6 ((*(volatile struct bits*)&PING).b6)
#define PING_7 ((*(volatile struct bits*)&PING).b7)

#define PINH_0 ((*(volatile struct bits*)&PINH).b0)
#define PINH_1 ((*(volatile struct bits*)&PINH).b1)
#define PINH_2 ((*(volatile struct bits*)&PINH).b2)
#define PINH_3 ((*(volatile struct bits*)&PINH).b3)
#define PINH_4 ((*(volatile struct bits*)&PINH).b4)
#define PINH_5 ((*(volatile struct bits*)&PINH).b5)
#define PINH_6 ((*(volatile struct bits*)&PINH).b6)
#define PINH_7 ((*(volatile struct bits*)&PINH).b7)