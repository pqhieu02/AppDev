OBJ = main.o eval.o getscore.o classification.o
APPNAME = score
$(APPNAME) : $(OBJ)
	gcc -o $(APPNAME) $(OBJ)
%.o : %.c
	gcc -c -o $@ $<
clean :
	rm $(OBJ) $(APPNAME)

