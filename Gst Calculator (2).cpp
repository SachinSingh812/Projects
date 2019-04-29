#include<stdio.h>
main()
{
	int choice,n,Item,ic,id,i,j,nu;
	float cp,sgst,cgst,value,amt,Bill=0;
	printf("\n====================================");
	puts("\n   UNI WORLD AND CO PVT.LTD  ");
	puts("\n\t((UNI SERVICES))");
	puts("\t SHOP.NO-512-12\n\t PHAGWARA__(LPU)");
	printf("\n====================================\n");
	printf("Enter 1 for Stationary items\n");
	printf("Enter 2 for Grocery items\n");
	printf("Enter 3 for Restaurant services\n");
	printf("Enter 4 for Hotel services\n");
	printf("\n\nEnter your choice: ");                       
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("=====================");
		printf("\nUni stationary");
		printf("\n=====================");
		printf("\nItem_count:");
		scanf("%d",&n);
		printf("\n-------------------------");
		for(i=0;i<n;i++)
		{
			printf("\nItem_Name:\t");
			scanf("%s",&Item);
			printf("\nP_id:\t\t");
			scanf("%d",&id);
			printf("\nQuantity:\t");
			scanf("%d",&nu);
			printf("\ncost price of product:Rs\t");
			scanf("%f",&cp);
			printf("\nAmount(inclidng tax):Rs\t");
			amt=cp*nu;
			printf("%f",amt);
			if(id<=90)
			{
				sgst=nu*0.12*cp;
				printf("\nsgst:Rs\t%f",sgst);
				cgst=nu*0.14*cp;
				printf("\ncgst:Rs\t%f",cgst);
			}
		    if((id>90)&&(id<200))
		 	{
				sgst=nu*0.12*cp;
				printf("\nsgst:Rs\t%f",sgst);
				cgst=nu*0.18*cp;
				printf("\ncgst:Rs\t%f",cgst);
	    	}
	    	if(id>200)
		 	{
				sgst=nu*0.12*cp;
				printf("\nsgst:Rs\t%f",sgst);
				cgst=nu*0.28*cp;
				printf("\ncgst:Rs\t%f",cgst);
	    	}
		    value=amt-(sgst+cgst);
		    printf("\nvalue(excluding tax):Rs\t%f",value);
			printf("\n===================");
			Bill=Bill+amt;
			printf("\nTOTAL BILL:Rs%f",Bill);
			printf("\n===================");
		}
   			
   	}
   	if(choice==2)
   	{
   		printf("=====================");
		printf("\nUni Grocery");
		printf("\n=====================");
   		printf("\nItem_count:");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("\nItem_Name:\t");
			scanf("%s",&Item);
			printf("\nP_id:\t");
			scanf("%d",&id);
			printf("\nQuantity(IN KG):\t");
			scanf("%d",&nu);
			printf("\ncost price of product:RS\t");
			scanf("%f",&cp);
			printf("\nAmount(inclidng tax):Rs\t");
			amt=cp*nu;
			printf("%f",amt);
			if(id<=90)
			{
				sgst=nu*0.12*cp;
				printf("\nsgst:Rs\t%f",sgst);
				cgst=nu*0.14*cp;
				printf("\ncgst:Rs\t%f",cgst);
			}
		    if((id>90)&&(id<200))
		  	{
				sgst=nu*0.12*cp;
				printf("\nsgst:Rs\t%f",sgst);
				cgst=nu*0.18*cp;
				printf("\ncgst:Rs\t%f",cgst);
	     	}
	     	 if(id>200)
		  	{
				sgst=nu*0.12*cp;
				printf("\nsgst:Rs\t%f",sgst);
				cgst=nu*0.28*cp;
				printf("\ncgst:Rs\t%f",cgst);
	     	}
		 	value=amt-(sgst+cgst);
			printf("\nvalue(excluding tax):Rs\t%f",value);
			printf("\n===================");
			Bill=Bill+amt;
			printf("\nTOTAL BILL:Rs%f",Bill);
			printf("\n===================");
		}
   		
   	}
   	if(choice==3)
   	{
   		printf("=====================");
		printf("\nUni Restaurant");
		printf("\n=====================");
   		printf("\nIteount:");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("\nItem_Name:\t");
			scanf("%s",&Item);
			printf("\nP_id:\t");
			scanf("%d",&id);
			printf("\nQuantity:\t");
			scanf("%d",&nu);
			printf("\ncost price per plate:Rs\t");
			scanf("%f",&cp);
			printf("\nAmount(inclidng tax):Rs\t");
			amt=cp*nu;
			printf("%f",amt);
			if(id<=90)
			{
				sgst=nu*0.12*cp;
				printf("\nsgst:Rs\t%f",sgst);
				cgst=nu*0.14*cp;
				printf("\ncgst:Rs\t%f",cgst);
			}
		    if((id>90)&&(id<200))
		  	{
				sgst=nu*0.12*cp;
				printf("\nsgst:Rs\t%f",sgst);
				cgst=nu*0.18*cp;
				printf("\ncgst:Rs\t%f",cgst);
	     	}
	     	 if(id>200)
		  	{
				sgst=nu*0.12*cp;
				printf("\nsgst:Rs\t%f",sgst);
				cgst=nu*0.28*cp;
				printf("\ncgst:Rs\t%f",cgst);
	     	}
			value=amt-(sgst+cgst);
			printf("\nvalue(excluding tax):Rs\t%f",value);
			printf("\n===================");
			Bill=Bill+amt;
			printf("\nTOTAL BILL:Rs%f",Bill);
			printf("\n===================");	
		}
   	}
	if (choice==4)
	{
		printf("\n\n===============================");
		printf("\n Welcome to Grand Uni Hotel");
		printf("\n===============================");
		int r,nr;
		float c,vp,igst,gst;
		printf("\n\nRent per room:Rs\t ");
		scanf("%d",&r);
		if(r<=2500)
		{
			printf("\n\nEnter the number of rooms:\t  ");
			scanf("%d",&nr);
			gst=(nr*r*12/100);
			printf("\n\ngst:Rs\t%f",gst);
			c=(nr*r)+gst;
			vp=(nr*r);
			printf("\n\nvalue price:Rs\t%f",vp);
			printf("\n\nAmount including igst:Rs\t %f",c);
		}
		else if(r>=2500&&r<10000)
		{
			printf("\n=====================");
			printf("\n\nEnter the number of rooms:\t ");
			scanf("%d",&nr);
			gst=(nr*r*18/100);
			printf("\n\ngst:Rs\t%f",gst);
			c=(nr*r)+gst;
			vp=(nr*r);
			printf("\n\nvalue price:Rs\t%f",vp);
			printf("\n\nAmount including igst:Rs\t %f",c);
		}
		else if(r>=10000)
		{
			printf("\n\n=====================");
			printf("\nServices:5 star hotel\n=====================\nEnter the number of rooms:\t");
			scanf("%d",&nr);
			igst=(nr*r*28/100);
			printf("\n\ngst:Rs\t%f",igst);
			c=(nr*r)+igst;
			vp=(nr*r);
			printf("\n\nvalue price:Rs\t%f",vp);
			printf("\n\nAmount including igst:Rs\t%f",c);
    		printf("\n=============\n");	
		}
		printf("\n*********THANK YOU********");
		printf("\nPlease visit us again");
		printf("\nwww.uniservices.com");
	}
}

