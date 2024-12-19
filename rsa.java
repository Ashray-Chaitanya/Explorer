public class RSA
{
 private BigInteger p,q,N,phi,e,d;
 private int bitlength = 48;
 private Random r;
 public RSA()
 {
 r = new Random();p = BigInteger.probablePrime(bitlength, r); q = BigInteger.probablePrime(bitlength, r);
 System.out.println("Prime number p is"+p); System.out.println("prime number q is"+q);
 N = p.multiply(q);
 phi = p.subtract(BigInteger.ONE).multiply(q.subtract(BigInteger.ONE));
 e = BigInteger.probablePrime(bitlength / 2, r);
 while (phi.gcd(e).compareTo(BigInteger.ONE) > 0 && e.compareTo(phi) < 0)
    e.add(BigInteger.ONE);

 System.out.println("Public key is"+e);
 d = e.modInverse(phi);
 System.out.println("Private key is"+d);
 }
 public RSA(BigInteger e, BigInteger d, BigInteger N)
 {
 this.e = e;
 this.d = d;
 this.N = N;
 }
 public static void main(String[] args) throws IOException
 {
 RSA rsa = new RSA();
 DataInputStream in = new DataInputStream(System.in);
 String teststring;
 System.out.println("Enter the plain text:");
 teststring = in.readLine();
 System.out.println("Encrypting String: " + teststring);
 System.out.println("String in Bytes: " + bytesToString(teststring.getBytes()));
 byte[] encrypted = rsa.encrypt(teststring.getBytes());
 byte[] decrypted = rsa.decrypt(encrypted);
 System.out.println("Decrypting Bytes: " + bytesToString(decrypted));
 System.out.println("Decrypted String: " + new String(decrypted));
 }
 
 private static String bytesToString(byte[] encrypted)
 {
 String test = "";
 for (byte b : encrypted)
 test += Byte.toString(b);
 return test;
 }
 public byte[] encrypt(byte[] m)
 {
 return (new BigInteger(m)).modPow(e, N).toByteArray();
 }
 public byte[] decrypt(byte[] m)
 {
 return (new BigInteger(m)).modPow(d, N).toByteArray();
 }
}