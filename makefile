objs=main.o
main:$(objs)
	g++ $(objs) -o main
main.o:
clean:
	rm -rf main main.o
