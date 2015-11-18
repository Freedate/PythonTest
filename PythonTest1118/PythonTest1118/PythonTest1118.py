from flask import Flask,url_for

app = Flask(__name__)


@app.route('/')
def hello_world():
    return 'Hello World!'
    
##@app.route('/hello/')
#@app.route('/hello/<name>')
#def hello(name=None):
#    return render_template('hello.html', name = name)

#@app.route('/profile/<username>')
#def get_profile(username):
#    return 'profile : ' + username

#@app.route('/message/<int:message_id>')
#def get_message(message_id):
#    return 'message_id : %d' % message_id

#@app.route('/projects/')
#def projects():
#    return 'The project page'

#@app.route('/about')
#def about():
#    return 'The about page'

#@app.route('/profile/', methods=['POST','GET'])
#def profile(username=None):
#    error=None
#    if request.method == 'POST':
#        username = request.form['username']
#        email = request.form['email']
#    if not username and not email:
#        return add_profile(request.form)
#    else:
#        error = 'Invalide username or email'
#    return render_template('profile.html', error=error)


#with app.test_request_context():
#    print(url_for('get_profile', username='greenjoa'))


#@app.route('/')
#def hello_world():
#    data={
#'title' : 'Hello',
#'name' : 'greenjoa'
#}
#    return render_template('first.html', **data)

#@app.route('/')
#def main():
#    return render_template('main.html')



if __name__ == '__main__':
    #app.run()

    #app.debug = True
    app.run(host = '127.0.0.1', port = 5000)
