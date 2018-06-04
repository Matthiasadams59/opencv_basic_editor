all :
	g++ $(pkg-config --cflags --libs opencv) exec.cpp -o ProjetAM 

