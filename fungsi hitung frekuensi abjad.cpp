#include <stdio.h>
#include <string.h>

// fungsi untuk menghitung frekuensi abjad
int * counterAbjad(char string[]){ 

	// COPY KODE DIBAWAH KE INT MAIN UNTUK MENJALANKAN FUNGSI ! //
	/*********************************
	// Me-return isi array
	int *abjad;
	abjad = counterAbjad();
	for (int i = 0; i < 26; i++){
		printf("%d ", *(abjad+i));
	}
	**********************************/
	int len;
	len = strlen(string);
	static int abjad [26] = {};
	
	for (int i = 0 ; i < len; i ++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (string[i] == 'a'+j)
			{
				abjad[j] += 1;
			}	
		}
	}
	return abjad ;
}

int main (){
	int *abjad;
	char string[1][255];
	scanf("%s",string);
	abjad = counterAbjad(*string);
	
	for (int i = 'a'; i < 'z'; i++)
	{
		printf("%d ", *(abjad+i));
	}
	return 0;
}
