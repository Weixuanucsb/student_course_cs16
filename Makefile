reverse_course_list_tests: reverse_course_list.o reverse_course_list_tests.o
	g++ $^ -o $@

clean:
	rm *.o reverse_course_list_tests