out: Arquero.o AsesinoOculto.o CorazaDura.o Ejercito.o Escuadron.o Main.o Simulador.o Soldado.o
	g++ Arquero.o AsesinoOculto.o CorazaDura.o Ejercito.o Escuadron.o Main.o Simulador.o Soldado.o -o out

Main.o: Main.cpp Arquero.h AsesinoOculto.h CorazaDura.h Ejercito.h Escuadron.h Simulador.h Soldado.h
	g++ -c Main.cpp

Arquero.o: Arquero.h Arquero.cpp
	g++ -c Arquero.cpp

AsesinoOculto.o: AsesinoOculto.h AsesinoOculto.cpp
	g++ -c AsesinoOculto.cpp

CorazaDura.o: CorazaDura.h CorazaDura.cpp
	g++ -c CorazaDura.cpp

Ejercito.o: Ejercito.h Ejercito.cpp
	g++ -c Ejercito.cpp

Escuadron.o: Escuadron.h Escuadron.cpp
	g++ -c Escuadron.cpp

Simulador.o: Simulador.h Simulador.cpp
	g++ -c Simulador.cpp

Soldado.o: Soldado.h Soldado.cpp
	g++ -c Soldado.cpp

clean:
	rm -rf *.o
