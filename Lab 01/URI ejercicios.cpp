
      numero=numero-20;
      counter1=counter1+1;
      array_apunte[2]=counter1;
    }
    counter1=0;
    while(numero>=10){
      numero=numero-10;
      counter1=counter1+1;
      array_apunte[3]=counter1;
    }    
    counter1=0;
    while(numero>=5){
      numero=numero-5;
      counter1=counter1+1;
      array_apunte[4]=counter1;
    }
    counter1=0;
    while(numero>=2){
      numero=numero-2;
      counter1=counter1+1;
      array_apunte[5]=counter1;
    }
      counter1=0;
    while(numero>=1){
      numero=numero-1;
      counter1=counter1+1;
      array_apunte[6]=counter1;
    }      
    
    cout<<array_apunte[0]<<" nota(s) de R$ 100,00 "<<endl;
    cout<<array_apunte[1]<<" nota(s) de R$ 50,00 "<<endl;
    cout<<array_apunte[2]<<" nota(s) de R$ 20,00 "<<endl;
    cout<<array_apunte[3]<<" nota(s) de R$ 10,00 "<<endl;
    cout<<array_apunte[4]<<" nota(s) de R$ 5,00 "<<endl;
    cout<<array_apunte[5]<<" nota(s) de R$ 2,00 "<<endl;
    cout<<array_apunte[6]<<" nota(s) de R$ 1,00 "<<endl;

   }
  else{
    cout<<"Por favor digite nuevamente un numero"<<endl;
    main();
    }  
    
  return 0;
}
