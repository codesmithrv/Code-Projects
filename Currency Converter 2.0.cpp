// Finalised Currency Converter/
#include<stdio.h>
int main()
{
	int ch;
	printf("Choose your currency.\n");
	printf("1. USD \n2. EUR \n3. INR \n4. THB \n5. CAD \n6. EXIT\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			{
				int U;
				printf("Convert to:\n");
				printf("1. USD \n2. EUR \n3. INR \n4. THB \n5. CAD \n6. EXIT\n");
				scanf("%d",&U);
				switch(U)
				{
					case 1:
						{
							float usd,eur,inr,thb,cad;
							float amt;
							printf("Enter amount.\n");
							scanf("%f",&amt);
							usd=amt*1;
							printf("Entered currency amount= %0.2f\n",amt);
							printf("Converted currency= %0.2f\n",usd);
							printf("USD %0.2f = USD %0.2f\n",amt,usd);
						}
						break;
						return 0;
					case 2:
						{
							float usd,eur,inr,thb,cad;
							float amt;
							printf("Enter amount.\n");
							scanf("%f",&amt);
							eur=amt*0.88;
							printf("Entered currency amount= %0.2f\n",amt);
							printf("Converted currency= %0.2f\n",eur);
							printf("USD %0.2f = EUR %0.2f\n",amt,eur);
						}
						break;
						return 0;
					case 3:
						{
							float usd,eur,inr,thb,cad;
							float amt;
							printf("Enter amount.\n");
							scanf("%f",&amt);
							inr=amt*74.68;
							printf("Entered currency amount= %0.2f\n",amt);
							printf("Converted currency= %0.2f\n",inr);
							printf("USD %0.2f = INR %0.2f\n",amt,inr);
						}
						break;
						return 0;
					case 4:
						{
							float usd,eur,inr,thb,cad;
							float amt;
							printf("Enter amount.\n");
							scanf("%f",&amt);
							thb=amt*32.15;
							printf("Entered currency amount= %0.2f\n",amt);
							printf("Converted currency= %0.2f\n",thb);
							printf("USD %0.2f = THB %0.2f\n",amt,thb);
						}
						break;
						return 0;
					case 5:
						{
							float usd,eur,inr,thb,cad;
							float amt;
							printf("Enter amount.\n");
							scanf("%f",&amt);
							cad=amt*1.28;
							printf("Entered currency amount= %0.2f\n",amt);
							printf("Converted currency= %0.2f\n",cad);
							printf("USD %0.2f = CAD %0.2f\n",amt,cad);
						}
						break;
						return 0;
					case 6:
						{
							printf("YOU HAVE EXITED.\n");
							printf("THANK YOU FOR USING CURRENCY CONVERTER!\n");
						}
				}
						break;
						return 0;
			}
		case 2:
			{
				int E;
				printf("Convert to:\n");
				printf("1. USD \n2. EUR \n3. INR \n4. THB \n5. CAD\n");
				scanf("%d",&E);
				switch(E)
				{
					case 1:
						{
							float usd,eur,inr,thb,cad;
							float amt;
							printf("Enter amount.\n");
							scanf("%f",&amt);
							usd=amt*1.13;
							printf("Entered currency amount= %0.2f\n",amt);
							printf("Converted currency= %0.2f\n",usd);
							printf("EUR %0.2f = USD %0.2f\n",amt,usd);
						}
						break;
						return 0;
					case 2:
						{
							float usd,eur,inr,thb,cad;
							float amt;
							printf("Enter amount.\n");
							scanf("%f",&amt);
							eur=amt*1;
							printf("Entered currency amount= %0.2f\n",amt);
							printf("Converted currency= %0.2f\n",eur);
							printf("EUR %0.2f = EUR %0.2f\n",amt,eur);
						}
						break;
						return 0;
					case 3:
						{
							float usd,eur,inr,thb,cad;
							float amt;
							printf("Enter amount.\n");
							scanf("%f",&amt);
							inr=amt*84.52;
							printf("Entered currency amount= %0.2f\n",amt);
							printf("Converted currency= %0.2f\n",inr);
							printf("EUR %0.2f = INR %0.2f\n",amt,inr);
						}
						break;
						return 0;
					case 4:
						{
							float usd,eur,inr,thb,cad;
							float amt;
							printf("Enter amount.\n");
							scanf("%f",&amt);
							thb=amt*36.39;
							printf("Entered currency amount= %0.2f\n",amt);
							printf("Converted currency= %0.2f\n",thb);
							printf("EUR %0.2f = THB %0.2f\n",amt,thb);
						}
						break;
						return 0;
					case 5:
						{
							float usd,eur,inr,thb,cad;
							float amt;
							printf("Enter amount.\n");
							scanf("%f",&amt);
							cad=amt*1.44;
							printf("Entered currency amount= %0.2f\n",amt);
							printf("Converted currency= %0.2f\n",cad);
							printf("EUR %0.2f = CAD %0.2f\n",amt,cad);
						}
						break;
						return 0;
					case 6:
						{
							printf("YOU HAVE EXITED.\n");
							printf("THANK YOU FOR USING CURRENCY CONVERTER!\n");
						}
				}
						break;
						return 0;
			}
		case 3:
			{
				int I;
				printf("Convert to:\n");
				printf("1. USD \n2. EUR \n3. INR \n4. THB \n5. CAD\n");
				scanf("%d",&I);
				switch(I)
				{
					case 1:
						{
							float usd,eur,inr,thb,cad;
							float amt;
							printf("Enter amount.\n");
							scanf("%f",&amt);
							usd=amt*0.013;
							printf("Entered currency amount= %0.2f\n",amt);
							printf("Converted currency= %0.2f\n",usd);
							printf("INR %0.2f = USD %0.2f\n",amt,usd);
						}
						break;
						return 0;
					case 2:
						{
							float usd,eur,inr,thb,cad;
							float amt;
							printf("Enter amount.\n");
							scanf("%f",&amt);
							eur=amt*0.012;
							printf("Entered currency amount= %0.2f\n",amt);
							printf("Converted currency= %0.2f\n",eur);
							printf("INR %0.2f = EUR %0.2f\n",amt,eur);
						}
						break;
						return 0;
					case 3:
						{
							float usd,eur,inr,thb,cad;
							float amt;
							printf("Enter amount.\n");
							scanf("%f",&amt);
							inr=amt*1;
							printf("Entered currency amount= %0.2f\n",amt);
							printf("Converted currency= %0.2f\n",inr);
							printf("INR %0.2f = INR %0.2f\n",amt,inr);
						}
						break;
						return 0;
					case 4:
						{
							float usd,eur,inr,thb,cad;
							float amt;
							printf("Enter amount.\n");
							scanf("%f",&amt);
							thb=amt*0.43;
							printf("Entered currency amount= %0.2f\n",amt);
							printf("Converted currency= %0.2f\n",thb);
							printf("INR %0.2f = THB %0.2f\n",amt,thb);
						}
						break;
						return 0;
					case 5:
						{
							float usd,eur,inr,thb,cad;
							float amt;
							printf("Enter amount.\n");
							scanf("%f",&amt);
							cad=amt*0.017;
							printf("Entered currency amount= %0.2f\n",amt);
							printf("Converted currency= %0.2f\n",cad);
							printf("INR %0.2f = CAD %0.2f\n",amt,cad);
						}
						break;
						return 0;
					case 6:
						{
							printf("YOU HAVE EXITED.\n");
							printf("THANK YOU FOR USING CURRENCY CONVERTER!\n");
						}
				}
						break;
						return 0;
			}
		case 4:
			{
				int T;
				printf("Convert to:\n");
				printf("1. USD \n2. EUR \n3. INR \n4. THB \n5. CAD\n");
				scanf("%d",&T);
				switch(T)
				{
					case 1:
						{
							float usd,eur,inr,thb,cad;
							float amt;
							printf("Enter amount.\n");
							scanf("%f",&amt);
							usd=amt*0.031;
							printf("Entered currency amount= %0.2f\n",amt);
							printf("Converted currency= %0.2f\n",usd);
							printf("THB %0.2f = USD %0.2f\n",amt,usd);
						}
						break;
						return 0;
					case 2:
						{
							float usd,eur,inr,thb,cad;
							float amt;
							printf("Enter amount.\n");
							scanf("%f",&amt);
							eur=amt*0.027;
							printf("Entered currency amount= %0.2f\n",amt);
							printf("Converted currency= %0.2f\n",eur);
							printf("THB %0.2f = EUR %0.2f\n",amt,eur);
						}
						break;
						return 0;
					case 3:
						{
							float usd,eur,inr,thb,cad;
							float amt;
							printf("Enter amount.\n");
							scanf("%f",&amt);
							inr=amt*2.32;
							printf("Entered currency amount= %0.2f\n",amt);
							printf("Converted currency= %0.2f\n",inr);
							printf("THB %0.2f = INR %0.2f\n",amt,inr);
						}
						break;
						return 0;
					case 4:
						{
							float usd,eur,inr,thb,cad;
							float amt;
							printf("Enter amount.\n");
							scanf("%f",&amt);
							thb=amt*1;
							printf("Entered currency amount= %0.2f\n",amt);
							printf("Converted currency= %0.2f\n",thb);
							printf("THB %0.2f = THB %0.2f\n",amt,thb);
						}
						break;
						return 0;
					case 5:
						{
							float usd,eur,inr,thb,cad;
							float amt;
							printf("Enter amount.\n");
							scanf("%f",&amt);
							cad=amt*0.040;
							printf("Entered currency amount= %0.2f\n",amt);
							printf("Converted currency= %0.2f\n",cad);
							printf("THB %0.2f = CAD %0.2f\n",amt,cad);
						}
						break;
						return 0;
					case 6:
						{
							printf("YOU HAVE EXITED.\n");
							printf("THANK YOU FOR USING CURRENCY CONVERTER!\n");
						}
				}
						break;
						return 0;
			}
		case 5:
			{
				int C;
				printf("Convert to:\n");
				printf("1. USD \n2. EUR \n3. INR \n4. THB \n5. CAD\n");
				scanf("%d",&C);
				switch(C)
				{
					case 1:
						{
							float usd,eur,inr,thb,cad;
							float amt;
							printf("Enter amount.\n");
							scanf("%f",&amt);
							usd=amt*0.78;
							printf("Entered currency amount= %0.2f\n",amt);
							printf("Converted currency= %0.2f\n",usd);
							printf("CAD %0.2f = USD %0.2f\n",amt,usd);
						}
						break;
						return 0;
					case 2:
						{
							float usd,eur,inr,thb,cad;
							float amt;
							printf("Enter amount.\n");
							scanf("%f",&amt);
							eur=amt*0.69;
							printf("Entered currency amount= %0.2f\n",amt);
							printf("Converted currency= %0.2f\n",eur);
							printf("CAD %0.2f = EUR %0.2f\n",amt,eur);
						}
						break;
						return 0;
					case 3:
						{
							float usd,eur,inr,thb,cad;
							float amt;
							printf("Enter amount.\n");
							scanf("%f",&amt);
							inr=amt*58.62;
							printf("Entered currency amount= %0.2f\n",amt);
							printf("Converted currency= %0.2f\n",inr);
							printf("CAD %0.2f = INR %0.2f\n",amt,inr);
						}
						break;
						return 0;
					case 4:
						{
							float usd,eur,inr,thb,cad;
							float amt;
							printf("Enter amount.\n");
							scanf("%f",&amt);
							thb=amt*25.22;
							printf("Entered currency amount= %0.2f\n",amt);
							printf("Converted currency= %0.2f\n",thb);
							printf("CAD %0.2f = THB %0.2f\n",amt,thb);
						}
						break;
						return 0;
					case 5:
						{
							float usd,eur,inr,thb,cad;
							float amt;
							printf("Enter amount.\n");
							scanf("%f",&amt);
							cad=amt*1;
							printf("Entered currency amount= %0.2f\n",amt);
							printf("Converted currency= %0.2f\n",cad);
							printf("CAD %0.2f = CAD %0.2f\n",amt,cad);
						}
						break;
						return 0;
					case 6:
						{
							printf("YOU HAVE EXITED.\n");
							printf("THANK YOU FOR USING CURRENCY CONVERTER!\n");
						}
				}
						break;
						return 0;
			}
		case 6:
			{
				printf("YOU HAVE EXITED.\n");
				printf("THANK YOU FOR USING CURRENCY CONVERTER!\n");
			}
			break;
			return 0;
		default:
			{
				printf("Invalid Choice!\n");
			}
	}
}
