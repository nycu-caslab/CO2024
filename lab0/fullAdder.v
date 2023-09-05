module fullAdder(cin, a, b, s, cout);
  input a;
  input b;  
  input cin; 
  output s;
  output cout;
  wire s1, c1, c2;
  xor (s1, a, b);
  and (c1, a, b);
  and (c2, cin, s1);
  xor (s, s1, cin);
  or  (cout, c1, c2);
endmodule

