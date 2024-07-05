import java.io.IOException;
import java.net.DatagramPacket;
import java.net.DatagramSocket;

public class ServerUDP {
    public static void main(String[] args) throws IOException {
        DatagramSocket ds = new DatagramSocket(1234);
        byte[] receivedData = new byte[65535];
        DatagramPacket dpReceive;

        while (true) {
            dpReceive = new DatagramPacket(receivedData, receivedData.length);
            ds.receive(dpReceive);
            String receivedText = data(receivedData).toString();
            System.out.println("Client:-" + receivedText);
            if (receivedText.equals("bye")) {
                System.out.println("Client sent bye.....EXITING");
                break;
            }
            // Reset receivedData for the next packet
            receivedData = new byte[65535];
        }
        ds.close();
    }

    public static StringBuilder data(byte[] a) {
        if (a == null)
            return null;
        StringBuilder ret = new StringBuilder();
        int i = 0;
        // Stop appending when a null character is encountered
        while (i < a.length && a[i] != 0) {
            ret.append((char) a[i]);
            i++;
        }
        return ret;
    }
}