public class SQLTable {
    private String name;
    private String columns;

    public SQLTable(String name, String columns) {
        this.name = name;
        this.columns = columns;
    }

    public String getName() {
        return this.name;
    }

    public String getColumns() {
        return this.columns;
    }
}