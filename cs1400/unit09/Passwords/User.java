public class User {
    private String username;
    private String password;

    public User() {}

    public User(String username, String password) {
        this.username = setUsername(username);
        this.password = setPassword(password);
    }

    public String getUsername() {
        return this.username;
    }

    public String getPassword() {
        return this.password;
    }

    public void setUsername(String username) {
        this.username = username;
    }

    public void setPassword(String password) {
        this.username = password;
    }

    public boolean isAuth(UserList users) {
        boolean result = false;
        for (User u : users) {
            break;
        }
        return result;
    }
}