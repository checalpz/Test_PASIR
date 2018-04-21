int led = 13;


void setup (){
  Serial.begin(9600);    // Inicio puerto serial a 9600 baudios
  pinMode(led,OUTPUT);  // LED 13 de salida
}

void loop (){
  if (Serial.available()){    // Si el puerto Serie esta disponible
    char c = Serial.read();
    
    if (c == 'H'){                  // H para encender el LED
      digitalWrite(led,HIGH);
      Serial.println("LED encendido");
    }
    else if (c == 'L'){            // L para apagar el LED
      digitalWrite(led,LOW);
      Serial.println("LED apagado");
    }
    else if (c == 'P'){            // P para leer potenciometro en PIN analogico 1
      Serial.println(analogRead(1));
    }
    else {
      Serial.println("Caracter no reconocido");
    }
  }
}
