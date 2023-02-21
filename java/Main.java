import java.util.ArrayList;
import java.util.Scanner;

public class Main{
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args){
        ArrayList<Mahasiswa> data = new ArrayList<>();
        Operator opr = new Operator();
        int n = 0;
        while (n != 5) {
            System.out.println("Selamat Datang di Program ABAL ABAL\nSilahkan Pilih:\n1. Menambahkan Data\n2. Merubah Data\n3. Menghapus Data\n4. Melihat Data\n5. Cancel\n");
            n = Integer.parseInt(input.nextLine());
            switch (n) {
                case 1:
                    opr.CreateData(data);
                    break;
                case 2:
                    opr.UpdateData(data);
                    break;
                case 3:
                    opr.DeleteData(data);
                    break;
                case 4:
                    opr.ReadData(data);
                    break;
                case 5:
                break;
                    default:
                        System.out.println("Pilihan tidak tersedia!\n");
                }
            }
        }
}