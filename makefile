searcheng: main.o Video.o Media.o Book.o SearchEngine.o Periodic.o Film.o
	$(CXX) $^ -o $@ $(LDFLAGS)

main.o: main.cpp Book.h Video.h Periodic.h Film.h SearchEngine.h Media.h
	$(CXX) $(CXXFLAGS) -c $<

Video.o: Video.cpp  Media.h Video.h 
	$(CXX) $(CXXFLAGS) -c $<

Media.o: Media.cpp Media.h
	$(CXX) $(CXXFLAGS) -c $<

Book.o: Book.cpp Book.h Media.h 
	$(CXX) $(CXXFLAGS) -c $<

Film.o: Film.cpp Film.h Media.h 
	$(CXX) $(CXXFLAGS) -c $<

SearchEngine.o: SearchEngine.cpp SearchEngine.h Media.h Film.h Book.h Video.h Periodic.h
	$(CXX) $(CXXFLAGS) -c $<

Periodic.o: Periodic.cpp Periodic.h Media.h
	$(CXX) $(CXXFLAGS) -c $<


clean:
	rm -f *.o searcheng
