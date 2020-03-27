import java.io.*;
import java.net.*;
class udps
{
 public static void main(String args[])throws Exception
 {
  DatagramSocket serverSocket=new DatagramSocket(9999);
  byte[]receiveData=new byte[1024];
  byte[]sendData=new byte[1024];
  BufferedReader inFromUser=new BufferedReader(new InputStreamReader(System.in));
  while(true)
  {
   DatagramPacket receivePacket=new DatagramPacket(receiveData,receiveData.length);
   serverSocket.receive(receivePacket);
   String sentence=new String(receivePacket.getData());
   System.out.println("received:"+sentence);
   InetAddress IPAddress=receivePacket.getAddress();
   int port=receivePacket.getPort();
   System.out.println("Enter the string");
   String s=inFromUser.readLine();
   sendData=s.getBytes();
   DatagramPacket sendPacket=new DatagramPacket(sendData,sendData.length,IPAddress,port);
   serverSocket.send(sendPacket);
   }
  }
 }  