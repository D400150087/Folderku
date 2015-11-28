#include <stdio.h>
#include <time.h>

int main() {

	int JAM=0;
	int MENIT=1;
	int DETIK=12;
	time_t AWAL=0, AKHIR=0;

	AWAL = time( NULL );
	while  ( (JAM != 0) || (MENIT != 0) || (DETIK !=0) ) {
			AKHIR = time( NULL );
			if (AKHIR > AWAL) {
				if (DETIK==0) {
					if (MENIT==0) {
						if (JAM==0) {
						} else {
							JAM--;
							MENIT = 59;
							DETIK = 59;
						}
					} else {
						MENIT--;
						DETIK = 59;
					}
				} else {
					DETIK--;
				}
				printf("Waktu %02d:%02d:%02d \n", JAM, MENIT, DETIK);

				AWAL = time( NULL );
            }
	}
	return 0;
}
