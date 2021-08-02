import { Container } from 'react-bootstrap'
import { Route, Switch } from 'react-router-dom'

// Layout
import Layout from './layout/Layout'

// pages
import Home from './pages/Home'
import Signin from './pages/Signin'
//import NotFound from './pages/NotFound'
import CreateAccount from './pages/CreateAccount'
import Staff from './pages/Staff'
import Rooms from './pages/Rooms'
import Movies from './pages/Movies'
import Scheduling from './pages/Scheduling'
import TicketVendor from './pages/TicketVendor'
import Stands from './pages/Stands'
const App = () => {
  return (
    <Layout>
      <Container>
        <Switch>
          <Route path='/' component={Home} exact />
          <Route path='/signin' component={Signin} />
          <Route path='/createaccount' component={CreateAccount} />
          <Route path='/staff' component={Staff} />
          <Route path='/movies' component={Movies} />
          <Route path='/rooms' component={Rooms} />
          <Route path='/scheduling' component={Scheduling} />
          <Route path='/tickets' component={TicketVendor} />
          <Route path='/stands' component={Stands} />
        </Switch>
      </Container>
    </Layout>
  )
}

export default App
