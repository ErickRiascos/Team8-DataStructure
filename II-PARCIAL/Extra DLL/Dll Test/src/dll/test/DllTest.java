package dll.Test;
import java.io.IOException;
import org.jawin.COMException;
import org.jawin.FuncPtr;
import org.jawin.ReturnFlags;

public class DllTest {
    public static void main(String[] args) throws IOException, COMException{
        String a="C:\\Users\\Erick\\Documents\\Curso cshar\\netcore\\Validar Datos\\Debug\\Validar Datos.dll";
        FuncPtr validarEnt = new FuncPtr(a,"validarEnt");
        System.out.println("Ingrese numero entero: ");
        validarEnt.invoke_I(ReturnFlags.CHECK_FALSE);
    }
}