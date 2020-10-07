#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define Pi 3.14159265

int main()
  {

    system("CLS");

    float a,b,c,ret,r,xV,yV,xF,yF,dir,axis,xC,yC;
    int sel,n,x,y,z,k,i;

    printf("----------------------\n");
    printf("Math App - CLI Edition\n");
    printf("----------------------\n\n");

    start:
      sel = 0;
      printf("Seleziona la modalita' \n");
      printf("1. Calcolatrice\t\t2. Parabole\t3. Circonferenze\t4. Divisori\n");
      printf("Selezione: ");
      scanf("%d",&sel);
        switch(sel)
          {
            case 1:
              goto calc;
              break;
            case 2:
              goto par;
              break;
            case 3:
              goto circ;
              break;
            case 4:
              goto num_div;
              break;
            default:
              printf("\nNon hai digitato un numero accettabile\n\n");
              goto start;
          }
    calc:

      system("CLS");

    calc_sel:

      printf("Quali operazioni vuoi fare?\n");
      printf("1. Aritmetiche\t\t2. Algebriche e trigonometriche\n");
      printf("Selezione: ");
      scanf("%d",&x);
      switch(x)
        {
          case 1:
            goto aritm;
            break;
          case 2:
            goto alg;
            break;
          default:
            printf("\nNon hai digitato un numero accettabile\n\n");
            goto calc_sel;
        }

    aritm:

      printf("\n\nSeleziona due numeri: ");
      scanf("%f%f",&a,&b);
      printf("\n\nQuale operazione vuoi fare?\n");
      printf("1. Addizione\t2. Sottrazione\t3. Moltiplicazione\t4. Divisione\n");
      printf("Selezione: ");
      scanf("%d",&y);
      switch(y)
        {
          case 1:
            ret = a + b;
            printf("\n\nIl risultato e' %f\n\n",ret);
            break;
          case 2:
            ret = a - b;
            printf("\n\nIl risultato e' %f\n\n",ret);
            break;
          case 3:
            ret = a * b;
            printf("\n\nIl risultato e' %f\n\n",ret);
            break;
          case 4:
            if(b==0)
              {
                if(a==0)
                  {
                    printf("\n\nIl risultato e' indeterminato\n\n");
                    break;
                  }
                else
                  {
                    printf("\n\nIl risultato e' impossibile\n\n");
                    break;
                  }
              }
            else
              {
                ret = a / b;
                printf("\n\nIl risultato e' %f\n\n",ret);
                break;
              }
          default:
            printf("\nNon hai digitato un numero accettabile\n\n");
        }
      goto back;

    alg:

      printf("\n\nInserisci un numero: ");
      scanf("%f",&a);
      printf("\n\nChe operazione vuoi fare?\n");
      printf("1. Radice quadrata\t2. Quadrato\t3. Seno\t4. Coseno\n");
      printf("Selezione: ");
      scanf("%d",&k);
      switch(k)
        {
          case 1:
            ret = sqrt(a);
            printf("\n\nIl risultato e' %f\n\n",ret);
            break;
          case 2:
            ret = a*a;
            printf("\n\nIl risultato e' %f\n\n",ret);
            break;
          case 3:
            ret = sin(a);
            printf("\n\nIl risultato e' %f\n\n",ret);
            break;
          case 4:
            ret = cos(a);
            printf("\n\nIl risultato e' %f\n\n",ret);
            break;
          default:
            printf("\nNon hai digitato un numero accettabile\n\n");
        }
      goto back;

    par:
      system("CLS");
      printf("Inserisci i tre coefficienti della parabola: ");
      scanf("%f%f%f",&a,&b,&c);
      par_sel:
        printf("\nLa parabola e' orizzontale o verticale?(1/2)\t");
        scanf("%d",&y);
          switch(y)
            {
              case 1:
                printf("Che cosa vuoi calcolare?\n");
                printf("1. Vertice\t2. Fuoco\t3. Direttrice\t4. Asse di simmetria\n");
                printf("Selezione: ");
                scanf("%d",&x);
                switch(x)
                  {
                    case 1:
                      yV = -(b/(2*a));
                      xV = -((b*b)-(4*a*c))/(4*a);
                      printf("\n\nL'ascissa del vertice e' %f",xV);
                      printf("\nL'ordinata del vertice e' %f\n\n",yV);
                      goto back;
                      break;
                    case 2:
                      xF = (1-(b*b)+(4*a*c))/(4*a);
                      yF = -(b/(2*a));
                      printf("\n\nL'ascissa del fuoco e' %f",xF);
                      printf("\nL'ordinata del fuoco e' %f\n\n",yF);
                      goto back;
                      break;
                    case 3:
                      dir = -(1+((b*b)-(4*a*c)))/(4*a);
                      printf("\n\nLa formula della direttrice e' x=%f\n\n",dir);
                      goto back;
                      break;
                    case 4:
                      axis = -(b/(2*a));
                      printf("\n\nLa formula dell'asse di simmetria e' y=%f\n\n",axis);
                      goto back;
                      break;
                    default:
                      printf("\nNon hai digitato un numero accettabile\n\n");
                      goto par_sel;
                  }
                    case 2:
                      printf("Che cosa vuoi calcolare?\n");
                      printf("1. Vertice\t2. Fuoco\t3. Direttrice\t4. Asse di simmetria\n");
                      printf("Selezione: ");
                      scanf("%d",&x);
                      switch(x)
                        {
                          case 1:
                            xV = -(b/(2*a));
                            yV = -((b*b)-(4*a*c))/(4*a);
                            printf("\n\nL'ascissa del vertice e' %f",xV);
                            printf("\nL'ordinata del vertice e' %f\n\n",yV);
                            goto back;
                            break;
                          case 2:
                            yF = (1-(b*b)+(4*a*c))/(4*a);
                            xF = -(b/(2*a));
                            printf("\n\nL'ascissa del fuoco e' %f",xF);
                            printf("\nL'ordinata del fuoco e' %f\n\n",yF);
                            goto back;
                            break;
                          case 3:
                            dir = -(1+((b*b)-(4*a*c)))/(4*a);
                            printf("\n\nLa formula della direttrice e' y=%f\n\n",dir);
                            goto back;
                            break;
                          case 4:
                            axis = -(b/(2*a));
                            printf("\n\nLa formula dell'asse di simmetria e' x=%f\n\n",axis);
                            goto back;
                            break;
                          default:
                            printf("\nNon hai digitato un numero accettabile\n\n");
                            goto par_sel;
                        }
            printf("\n\n");
        }
    circ:
      system("CLS");
      printf("Inserisci i tre coefficienti della circonferenza: ");
      scanf("%f%f%f",&a,&b,&c);
    circ_sel:
      printf("\nChe cosa vuoi calcolare?\n");
      printf("1. Centro\t2. Raggio\n");
      printf("Selezione: ");
      scanf("%d",&x);
      switch(x)
        {
          case 1:
            xC = -(a/2);
            yC = -(b/2);
            printf("\n\nL'ascissa del centro e' %f",xC);
            printf("\nL'ordinata del centro e' %f\n\n",yC);
            goto back;
            break;
          case 2:
            r = sqrt((-a/2)*(-a/2)+(-b/2)*(-b/2)-c);
            printf("\n\nIl raggio della circonferenza e' %f\n\n",r);
            goto back;
            break;
          default:
            printf("\nNon hai digitato un numero accettabile\n\n");
            goto circ_sel;
            break;
        }
    num_div:
      system("CLS");
      printf("Seleziona un numero: ");
      scanf("%d",&n);
      for(i=1;i<=13;i++)
        {
          if(n%i==0)
            {
              printf("\n\nIl numero e' divisibile per %d\n",i);
            }
          else
            {

            }
        }
      printf("\n\n");
      goto back;

    back:
      printf("Vuoi continuare, ritornare al menu'\nprincipale o terminare il programma?\n");
      printf("1. Home\t\t2. Ripeti\t3. Termina\n");
      printf("Selezione: ");
      scanf("%d",&z);
      switch(z)
        {
          case 1:
            system("CLS");
            goto start;
            break;
          case 2:
            system("CLS");
            switch(sel)
              {
                case 1:
                  goto calc;
                  break;
                case 2:
                  goto par;
                  break;
                case 3:
                  goto circ;
                  break;
                case 4:
                  goto num_div;
                  break;
                default:
                  printf("\aErrore");
                  return 0;
              }
            break;
          case 3:
            return 0;
            break;
          default:
            printf("\nNon hai digitato un numero accettabile\n\n");
            goto back;
        }
  }
