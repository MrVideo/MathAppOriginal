#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
	{
		char sel,selCalc,selArit,selAlg,selHorVert,selPar,selCirc,selEll,selHyp;
		int flag=0;
		float f1,f2,ris,base,esp,c1,c2,a,b,c,d,yCoord,xCoord;

		printf("----------------------\n");
    	printf("Math App - CLI Edition\n");
   	 	printf("----------------------\n\n");
   	 	printf("Ver. 2.0 - Beta 1\n\n");


		for( ; ; )
			{
				// Inizializzazione

				system("clear");
				printf("Seleziona una funzione:\n");
				printf("a. Calcolatrice\tb. Parabole\tc. Circonferenza\n");
				printf("d. Ellisse\te. Iperbole\tf. Divisori\n\n");
				printf("Selezione: ");
				scanf("\t%c",&sel);

				// Selezione principale

				switch(sel)
					{
						case 'a':
							system("clear");
							printf("Che tipo di operazioni vuoi fare?\n");
							printf("a. Aritmetiche\tb. Algebriche e Trigonometriche\n\n");
							printf("Selezione: ");
							scanf("\t%c",&selCalc);

							// Selezione Calcolatrice

							switch(selCalc)
								{
									case 'a':
										printf("\n\nSeleziona due numeri: ");
										scanf("%f%f",&f1,&f2);
										printf("\n\nQuale operazione vuoi fare?\n");
										printf("a. Addizione\tb. Sottrazione\tc. Moltiplicazione\td. Divisione\n\n");
										printf("Selezione: ");
										scanf("\t%c",&selArit);

										// Selezione Calcolo Aritmetico

										switch(selArit)
											{
												case 'a':
													// Addizione
													ris = f1 + f2;
													printf("\n\nIl risultato è %.2f\n\n",ris);
													printf("Terminare il programma? (1/0)");
													scanf("\t%i",&flag);
													switch(flag)
														{
															case 0:
																break;
															case 1:
																return 0;
																break;
														}
													break;
												case 'b':
													// Sottrazione
													ris = f1 - f2;
													printf("\n\nIl risultato è %.2f\n\n",ris);
													printf("Terminare il programma? (1/0)");
													scanf("\t%i",&flag);
													switch(flag)
														{
															case 0:
																break;
															case 1:
																return 0;
																break;
														}
													break;
												case 'c':
													// Moltiplicazione
													ris = f1 * f2;
													printf("\n\nIl risultato è %.2f\n\n",ris);
													printf("Terminare il programma? (1/0)");
													scanf("\t%i",&flag);
													switch(flag)
														{
															case 0:
																break;
															case 1:
																return 0;
																break;
														}
													break;
												case 'd':
													// Divisione
													ris = f1 / f2;
													printf("\n\nIl risultato è %.2f\n\n",ris);
													printf("Terminare il programma? (1/0)");
													scanf("\t%i",&flag);
													switch(flag)
														{
															case 0:
																break;
															case 1:
																return 0;
																break;
														}
													break;
												default:
													printf("\n\nHai digitato un carattere non autorizzato\n\n");
													printf("Se hai digitato un carattere corretto, segnalalo allo sviluppatore\n\n");
													printf("Il programma verrà ora terminato\n\n");
													return 0;
											}
										break;
									case 'b':
										printf("\n\nQuale operazione vuoi fare?\n");
										printf("a. Seno\t\tb. Coseno\tc. Tangente\n");
										printf("d. Cosecante\te. Secante\tf. Cotangente\n");
										printf("g. Potenza\th. Radice quadrata\ti. Ipotenusa\n");
										printf("l. Logaritmo\tm. Logaritmo naturale\tn. Esponenziale\n\n");
										printf("Selezione: ");
										scanf("\t%c",&selAlg);

										// Selezione Calcolo Algebrico

										switch(selAlg)
											{
												case 'a':
													printf("\n\nInserisci un numero: ");
													scanf("\t%f",&f1);
													ris = sin(f1);
													printf("\n\nIl risultato è %.3f\n\n",ris);
													printf("Terminare il programma? (1/0)");
													scanf("\t%i",&flag);
													switch(flag)
														{
															case 0:
																break;
															case 1:
																return 0;
																break;
														}
													break;
												case 'b':
													printf("\n\nInserisci un numero: ");
													scanf("\t%f",&f1);
													ris = cos(f1);
													printf("\n\nIl risultato è %.3f\n\n",ris);
													printf("Terminare il programma? (1/0)");
													scanf("\t%i",&flag);
													switch(flag)
														{
															case 0:
																break;
															case 1:
																return 0;
																break;
														}
													break;
												case 'c':
													printf("\n\nInserisci un numero: ");
													scanf("\t%f",&f1);
													ris = tan(f1);
													printf("\n\nIl risultato è %.3f\n\n",ris);
													printf("Terminare il programma? (1/0)");
													scanf("\t%i",&flag);
													switch(flag)
														{
															case 0:
																break;
															case 1:
																return 0;
																break;
														}
													break;
												case 'd':
													printf("\n\nInserisci un numero: ");
													scanf("\t%f",&f1);
													ris = 1/sin(f1);
													printf("\n\nIl risultato è %.3f\n\n",ris);
													printf("Terminare il programma? (1/0)");
													scanf("\t%i",&flag);
													switch(flag)
														{
															case 0:
																break;
															case 1:
																return 0;
																break;
														}
													break;
												case 'e':
													printf("\n\nInserisci un numero: ");
													scanf("\t%f",&f1);
													ris = 1/cos(f1);
													printf("\n\nIl risultato è %.3f\n\n",ris);
													printf("Terminare il programma? (1/0)");
													scanf("\t%i",&flag);
													switch(flag)
														{
															case 0:
																break;
															case 1:
																return 0;
																break;
														}
													break;
												case 'f':
													printf("\n\nInserisci un numero: ");
													scanf("\t%f",&f1);
													ris = 1/tan(f1);
													printf("\n\nIl risultato è %.3f\n\n",ris);
													printf("Terminare il programma? (1/0)");
													scanf("\t%i",&flag);
													switch(flag)
														{
															case 0:
																break;
															case 1:
																return 0;
																break;
														}
													break;
												case 'g':
													printf("\n\nInserisci la base: ");
													scanf("\t%f",&base);
													printf("\n\nInserisci l'esponente: ");
													scanf("\t%f",&esp);
													ris = pow(base,esp);
													printf("\n\nIl risultato è %.3f\n\n",ris);
													printf("Terminare il programma? (1/0)");
													scanf("\t%i",&flag);
													switch(flag)
														{
															case 0:
																break;
															case 1:
																return 0;
																break;
														}
													break;
												case 'h':
													printf("\n\nInserisci un numero: ");
													scanf("\t%f",&f1);
													ris = sqrt(f1);
													printf("\n\nIl risultato è %.3f\n\n",ris);
													printf("Terminare il programma? (1/0)");
													scanf("\t%i",&flag);
													switch(flag)
														{
															case 0:
																break;
															case 1:
																return 0;
																break;
														}
													break;
												case 'i':
													printf("\n\nInserisci i cateti: ");
													scanf("\t%f%f",&c1,&c2);
													ris = hypot(c1,c2);
													printf("\n\nIl risultato è %.3f\n\n",ris);
													printf("Terminare il programma? (1/0)");
													scanf("\t%i",&flag);
													switch(flag)
														{
															case 0:
																break;
															case 1:
																return 0;
																break;
														}
													break;
												case 'l':
													printf("\n\nInserisci rispettivamente la base e il numero da calcolare: ");
													scanf("\t%f%f",&b,&a);
													if(a == 10)
														{
															ris = log10(a);
															printf("\n\nIl logaritmo in base 10 di %.2f è %.3f\n\n",a,ris);
															printf("Terminare il programma? (1/0)");
															scanf("\t%i",&flag);
															switch(flag)
																{
																	case 0:
																		break;
																	case 1:
																		return 0;
																		break;
																}
														}
													else
														{
															ris = log(a)/log(b);
															printf("\n\nIl logaritmo in base %.2f di %.2f è %.3f",b,a,ris);
															printf("Terminare il programma? (1/0)");
															scanf("\t%i",&flag);
															switch(flag)
																{
																	case 0:
																		break;
																	case 1:
																		return 0;
																		break;
																}
														}
													break;
												case 'm':
													printf("\n\nInserisci il numero da calcolare: ");
													scanf("\t%f",&a);
													ris = log(a);
													printf("\n\nIl logaritmo naturale di %.2f è %.3f\n\n",a,ris);
													printf("Terminare il programma? (1/0)");
													scanf("\t%i",&flag);
													switch(flag)
														{
															case 0:
																break;
															case 1:
																return 0;
															break;
														}
													break;
												case 'n':
													printf("\n\nInserisci il numero da calcolare: ");
													scanf("\t%f",&a);
													ris = exp(a);
													printf("\n\nL'esponenziale di %.2f è %.3f\n\n",a,ris);
													printf("Terminare il programma? (1/0)");
													scanf("\t%i",&flag);
													switch(flag)
														{
															case 0:
																break;
															case 1:
																return 0;
															break;
														}
													break;
												default:
													printf("\n\nHai digitato un carattere non autorizzato\n\n");
													printf("Se hai digitato un carattere corretto, segnalalo allo sviluppatore\n\n");
													printf("Il programma verrà ora terminato\n\n");
													return 0;
											}
										break;
									default:
										printf("\n\nHai digitato un carattere non autorizzato\n\n");
										printf("Se hai digitato un carattere corretto, segnalalo allo sviluppatore\n\n");
										printf("Il programma verrà ora terminato\n\n");
										return 0;
								}
							break;

						// Calcolo Parabole

						case 'b':
							system("clear");
							printf("Inserisci i tre coefficienti della parabola: ");
							scanf("\t%f%f%f",&a,&b,&c);
							printf("\n\nLa parabola è verticale (v) od orizzontale (o)? ");
							scanf("\t%c",&selHorVert);
							switch(selHorVert)
								{
									case 'o':
										printf("\n\nCosa vuoi calcolare?\n");
										printf("a. Vertice\tb. Fuoco\tc. Direttrice\td. Asse di simmetria\n");
										printf("\n\nSelezione: ");
										scanf("\t%c",&selPar);
										switch(selPar)
											{
												case 'a':
													yCoord = -(b/(2*a));
                      								xCoord = -((b*b)-(4*a*c))/(4*a);
                     								printf("\n\nL'ascissa del vertice è %f",xCoord);
                      								printf("\nL'ordinata del vertice è %f\n\n",yCoord);
                      								printf("Terminare il programma? (1/0)");
													scanf("\t%i",&flag);
													switch(flag)
														{
															case 0:
																break;
															case 1:
																return 0;
																break;
														}
													break;
												case 'b':
													xCoord = (1-(b*b)+(4*a*c))/(4*a);
                     								yCoord = -(b/(2*a));
                      								printf("\n\nL'ascissa del fuoco è %f",xCoord);
                      								printf("\nL'ordinata del fuoco è %f\n\n",yCoord);
                      								printf("Terminare il programma? (1/0)");
													scanf("\t%i",&flag);
													switch(flag)
														{
															case 0:
																break;
															case 1:
																return 0;
																break;
														}
													break;
												case 'c':
													ris = -(1+((b*b)-(4*a*c)))/(4*a);
                      								printf("\n\nLa formula della direttrice è x=%f\n\n",ris);
                      								printf("Terminare il programma? (1/0)");
													scanf("\t%i",&flag);
													switch(flag)
														{
															case 0:
																break;
															case 1:
																return 0;
																break;
														}
													break;
												case 'd':
													ris = -(b/(2*a));
                      								printf("\n\nLa formula dell'asse di simmetria è y=%f\n\n",ris);
                      								printf("Terminare il programma? (1/0)");
													scanf("\t%i",&flag);
													switch(flag)
														{
															case 0:
																break;
															case 1:
																return 0;
																break;
														}
													break;
												default:
													printf("\n\nHai digitato un carattere non autorizzato\n\n");
													printf("Se hai digitato un carattere corretto, segnalalo allo sviluppatore\n\n");
													printf("Il programma verrà ora terminato\n\n");
													return 0;
											}
										break;
									case 'v':
										printf("\n\nCosa vuoi calcolare?\n");
										printf("a. Vertice\tb. Fuoco\tc. Direttrice\td. Asse di simmetria\n");
										printf("\n\nSelezione: ");
										scanf("\t%c",&selPar);
										switch(selPar)
											{
												case 'a':
													xCoord = -(b/(2*a));
                      								yCoord = -((b*b)-(4*a*c))/(4*a);
                     								printf("\n\nL'ascissa del vertice è %f",xCoord);
                      								printf("\nL'ordinata del vertice è %f\n\n",yCoord);
                      								printf("Terminare il programma? (1/0)");
													scanf("\t%i",&flag);
													switch(flag)
														{
															case 0:
																break;
															case 1:
																return 0;
																break;
														}
													break;
												case 'b':
													yCoord = (1-(b*b)+(4*a*c))/(4*a);
                     								xCoord = -(b/(2*a));
                      								printf("\n\nL'ascissa del fuoco è %f",xCoord);
                      								printf("\nL'ordinata del fuoco è %f\n\n",yCoord);
                      								printf("Terminare il programma? (1/0)");
													scanf("\t%i",&flag);
													switch(flag)
														{
															case 0:
																break;
															case 1:
																return 0;
																break;
														}
													break;
												case 'c':
													ris = -(1+((b*b)-(4*a*c)))/(4*a);
                      								printf("\n\nLa formula della direttrice è x=%f\n\n",ris);
                      								printf("Terminare il programma? (1/0)");
													scanf("\t%i",&flag);
													switch(flag)
														{
															case 0:
																break;
															case 1:
																return 0;
																break;
														}
													break;
												case 'd':
													ris = -(b/(2*a));
                      								printf("\n\nLa formula dell'asse di simmetria è y=%f\n\n",ris);
                      								printf("Terminare il programma? (1/0)");
													scanf("\t%i",&flag);
													switch(flag)
														{
															case 0:
																break;
															case 1:
																return 0;
																break;
														}
													break;
												default:
													printf("\n\nHai digitato un carattere non autorizzato\n\n");
													printf("Se hai digitato un carattere corretto, segnalalo allo sviluppatore\n\n");
													printf("Il programma verrà ora terminato\n\n");
													return 0;
											}
										break;
									default:
										printf("\n\nHai digitato un carattere non autorizzato\n\n");
										printf("Se hai digitato un carattere corretto, segnalalo allo sviluppatore\n\n");
										printf("Il programma verrà ora terminato\n\n");
										return 0;
								}
							break;

						// Calcolo Circonferenze

						case 'c':
							system("clear");
     						printf("Inserisci i tre coefficienti della circonferenza: ");
     						scanf("%f%f%f",&a,&b,&c);
							printf("\n\nChe cosa vuoi calcolare?\n");
							printf("a. Centro\tb. Raggio\n\n");
							printf("Selezione: ");
							scanf("\t%c",&selCirc);
							switch(selCirc)
								{
									case 'a':
										xCoord = -(a/2);
            							yCoord = -(b/2);
            							printf("\n\nL'ascissa del centro è %f",xCoord);
            							printf("\nL'ordinata del centro è %f\n\n",yCoord);
            							printf("Terminare il programma? (1/0)");
											scanf("\t%i",&flag);
											switch(flag)
												{
													case 0:
														break;
													case 1:
														return 0;
														break;
												}
										break;
									case 'b':
										ris = sqrt((-a/2)*(-a/2)+(-b/2)*(-b/2)-c);
            							printf("\n\nIl raggio della circonferenza è %f\n\n",ris);
            							printf("Terminare il programma? (1/0)");
											scanf("\t%i",&flag);
											switch(flag)
												{
													case 0:
											 			break;
													case 1:
														return 0;
														break;
												}
										break;
									default:
										printf("\n\nHai digitato un carattere non autorizzato\n\n");
										printf("Se hai digitato un carattere corretto, segnalalo allo sviluppatore\n\n");
										printf("Il programma verrà ora terminato\n\n");
										return 0;
								}
							break;

						// Calcolo Ellisse

						case 'd':
							system("clear");
							printf("Inserisci i due coefficienti dell'ellisse: ");
							scanf("\t%f%f",&a,&b);
							printf("\n\nCosa vuoi calcolare?\n");
							printf("a. Vertici\tb. Fuochi\tc. Eccentricità\n\n");
							printf("Selezione: ");
							scanf("\t%c",&selEll);
							switch(selEll)
								{
									case 'a':
										printf("\n\nI vertici sono (+/-%.2f;0)\n",a);
										printf("e (0;+/-%.2f)",b);
										printf("Terminare il programma? (1/0)");
										scanf("\t%i",&flag);
										switch(flag)
											{
												case 0:
													break;
												case 1:
													return 0;
													break;
											}
										break;
									case 'b':
										if(a > b)
											{
												xCoord = sqrt(pow(a,2)-pow(b,2));
												printf("\n\nI fuochi hanno coordinate (+/-%.2f;0)\n\n",xCoord);
												printf("Terminare il programma? (1/0)");
												scanf("\t%i",&flag);
												switch(flag)
													{
														case 0:
															break;
														case 1:
															return 0;
															break;
													}
											}
										else
											{
												yCoord = sqrt(pow(b,2)-pow(a,2));
												printf("\n\nI fuochi hanno coordinate (0;+/-%.2f)",yCoord);
												printf("Terminare il programma? (1/0)");
												scanf("\t%i",&flag);
												switch(flag)
													{
														case 0:
															break;
														case 1:
															return 0;
															break;
													}
											}
										break;
									case 'c':
										if(a > b)
											{
												ris = (sqrt(pow(a,2)-pow(b,2)))/a;
												printf("\n\nL'eccentricità è pari a %.2f\n\n",ris);
												printf("Terminare il programma? (1/0)");
												scanf("\t%i",&flag);
												switch(flag)
													{
														case 0:
															break;
														case 1:
															return 0;
															break;
													}
											}
										else
											{
												ris = (sqrt(pow(b,2)-pow(a,2)))/b;
												printf("\n\nL'eccentricità è pari a %.2f\n\n",ris);
												printf("Terminare il programma? (1/0)");
												scanf("\t%i",&flag);
												switch(flag)
													{
														case 0:
															break;
														case 1:
															return 0;
															break;
													}
											}
										break;
									default:
										printf("\n\nHai digitato un carattere non autorizzato\n\n");
										printf("Se hai digitato un carattere corretto, segnalalo allo sviluppatore\n\n");
										printf("Il programma verrà ora terminato\n\n");
										return 0;
								}
							break;

						// Calcolo Iperboli

						case 'e':
							system("clear");
							printf("Che tipo di ellisse devi studiare?\n");
							printf("a. Normale\tb. Equilatere\n");
							printf("c. Riferite agli asintoti\td. Omografiche\n\n");
							printf("Selezione: ");
							scanf("\t%c",&selHyp);
							switch(selHyp)
								{
									case 'a':
										break;
								}
					}
			}
	}
