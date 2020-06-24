CC = gcc
CFLAGS = -c –Wall -Werror 
EXECUTABLE = main
SOURCES = src/main.c src/after_rbracket.c src/circle_area.c src/circle_perimetr.c src/comma_find.c src/complete_circle_check.c src/complete_triangle_check.c src/coords_record.c src/lbracket.c src/shapecheck.c src/triangle_area.c src/triangle_perimetr.c src/rbracket.c src/radius_record.c
OBJECTS=$(SOURCES: .c=.o)

all:	$(SOURCES) $(EXECUTABLE)

$(EXECUTABLE) : $(OBJECTS)
	$(CC)  $(OBJECTS) -o bin/$@ -lm

.c.o:
	$(CC) $(CFLAGS) $< -o build/$@

clean:
	rm -rf *.o *.exe