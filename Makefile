CFLAGS = -ansi -pedantic -Wimplicit-function-declaration -Wreturn-type -g

obj = lab4main.o get_days.o insert.o print_menu.o get_length.o read_inventory.o

all:lab4 lab4.zip

lab4.zip: *.c *.h Makefile LAB4README
	zip $@ $^

%.o: %.c *.h
	gcc -c &< -o $@ $(CFLAGS)

lab4: $(obj)
	gcc $^ -o $@ $(CFLAGS)

clean:
	rm -rf *.o lab4 lab4.zip 
