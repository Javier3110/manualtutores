#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main(){
	char name[11];
	int j_vida = 45;
	int d_vida = 40;
	int ataque;
	int dano;
	int replay=1;
	int arma[3][3] = {{7,9,10},{5,8,14},{3,7,20}};	
	char botin[3][10] ={"Rubies", "Zafiros", "Perlas"};
	
	printf("Cual es tu nombre aventurero? ");
	scanf("%10s", &name);
	while(replay==1)
	{
     	printf("\nHas llegado a la cueva del dragon, el enorme reptil ruge ante tu llegada debes acabarlo para salvar a tu reino ATACALO!\n\n");
		while(j_vida>0&&d_vida>0)
		{
			do
			{
				printf("Que usaras para atacar al dragon:\n0 - Espada (7, 9 o 10 pts)\n1 - Arco (5, 8 o 14 pts)\n2 - Magia (3, 7 o 20 de pts)\n");
				scanf("%d", &ataque);
				switch(ataque){
					case 0:
						printf("Lleno de valor tomas tu espada y lanzas un feroz ataque... ");
						break;
					case 1:
						printf("Buscas refugio tras una roca y lanzas una flecha hacia el dragon... ");
						break;
					case 2:
						printf("Recitas un arcano conjuro y lanzas rayos esmeralda desde tu mano... ");
						break;
					default:
						printf("No tienes mas opciones.\n");
				}
			}while(ataque!=0&&ataque!=1&&ataque!=2);
			srand(time(NULL));
			dano = rand()%3;
			d_vida -= arma[ataque][dano];
			switch(dano){
				case 0:
					printf(" Tu ataque no fue tan efectivo [%d pts]\n",arma[ataque][dano]);
					break;
				case 1:
					printf(" Haz logrado herir al dragon [%d pts]\n",arma[ataque][dano]);
					break;
				case 2:
					printf(" Que gran ataque! Seras una leyenda [%d pts]\n",arma[ataque][dano]);
					break;
			}
			if(d_vida>0)
			{
				printf("El dragon se prepara a atacar... ");
				dano = rand()%10+7;
				j_vida -= dano;
				if(dano>12)
				{
					printf(" Ese ha sido un atque avasallador [%d pts]\n", dano);
				}
				else if(dano>9)
				{
					printf(" El dragon es un digno oponente [%d pts]\n", dano);
				}
				else
				{
					printf(" Recibiste muy poco impacto [%d pts]\n", dano);
				}
			}
			else
			{
				int riqueza,i;
				printf("\nLo has logrado %s, el dragon yace muerto a tus pies, haran canciones en tu honor. En la cueva has encontrado un gran botin.\n", name);
				for(i=0;i<3;i++)
				{
					riqueza = rand()%401+100;
					printf("%d %s, ", riqueza, botin[i]);
				}	
				printf("\n\nVe y busca nuevas aventuras. Quieres jugar de nuevo?\n0 - No\n1 - Si\n",name);
				scanf("%d",&replay);
			}		
			if(j_vida<1)
			{
				printf("\n\nHas sido derrotado %s, tus restos seran el trofeo del dragon. Quieres intentarlo otra vez?\n0 - No\n1 - Si\n",name);
				scanf("%d",&replay);
			
			}
			if(j_vida>0&&d_vida>0)
			{
				printf("Que gran batalla estas librando, no te rindas. Aun tienes %d puntos de vida y el dragon %d\n\n",j_vida,d_vida);
			}
		}
		if(replay==1)
			{
				j_vida = 45;
                d_vida = 40;
			}	
	}
	
	return 0;
}
