#ifndef LER_H
#define LER_H

#define LER_MIN_ANO 1850
#define LER_TAM_STRING 80
#define LER_TAM_UF 2
#define LER_TAM_CPF 11
#define LER_TAM_MAT 8
#define LER_MIN_TEL 8
#define LER_MAX_TEL 9
#define LER_MIN_NUM 1
#define LER_MAX_NUM 8
#define LER_QTD_EST 27
#define LER_TAM_DSM 27 //dia da semana
#define LER_TAM_RG 9
#define LER_COD_TUR 3
#define LER_MIN_SAL 3 //sem contar com o predio
#define LER_MAX_SAL 4 //sem contar com o predio
#define LER_COD_DIS 7

#define LER_TAM_BIBLIOGRAFIA 1023
#define LER_TAM_EMENTA 1023

#define LER_TOUPPER 1
#define LER_NORMAL 0
#define LER_TOLOWER -1

/* TODO isso nao vai ficar aqui, é só por enquanto*/
#ifdef __linux__
	#define VK_ENTER 10
	#define VK_BACKSPACE 127
#else
	#define VK_ENTER 13
	#define VK_BACKSPACE 8
#endif


	typedef int (*LER_Compara)(unsigned char) ;

	void LER_leStringConverte ( char * leValor, int min, int max, LER_Compara compara, int converte ) ;

	void LER_leString ( char * leValor, int min, int max, LER_Compara compara ) ;

	void LER_leInteiro( int * leValor,int min, int max, LER_Compara compara) ;

	void LER_leUF ( char * UF ) ;

	void LER_leData ( int * dia, int * mes, int * ano );
	
	void LER_leNota ( float *leValor, int min, int max, LER_Compara compara ) ;

	int LER_comparaLeSoLetra ( unsigned char a ) ;

	int LER_comparaLeSoNumero ( unsigned char a ) ;

	int LER_comparaLeLogradouro ( unsigned char a ) ;

	int LER_comparaLeComplemento ( unsigned char a ) ;

	int LER_comparaLeEmail ( unsigned char a ) ;

#endif
