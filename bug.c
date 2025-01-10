int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; 
  printf("%d", x); //This line will print 20
  free(ptr); // This line will cause undefined behavior
  return 0; 
}