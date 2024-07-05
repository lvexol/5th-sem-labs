import java.io.IOException;
import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;
import java.util.Scanner;

public class ClientUDP {
    public static void main(String[] args) throws IOException {
        Scanner input = new Scanner(System.in);
        DatagramSocket socket = new DatagramSocket();
        InetAddress ip = InetAddress.getLocalHost();
        byte[] buf;

        while (true) {
            String inp = input.nextLine();
            buf = inp.getBytes();
            DatagramPacket packet = new DatagramPacket(buf, buf.length, ip, 1234);
            socket.send(packet);
            if (inp.equals("Over")) {
                break;
            }
        }
        socket.close();
        input.close();
    }
}