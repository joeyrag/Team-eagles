import Header from '../components/Header'
import Meta from '../components/Meta'
import Button from 'react-bootstrap/Button';
import CardGroup from 'react-bootstrap/CardGroup';
import Card from 'react-bootstrap/Card';
import { LinkContainer } from 'react-router-bootstrap'
const Home = () => {
  // page content
  const pageTitle = 'Movie Theater Simulator'
  const pageDescription = 'This application is meant to simulate movie theaters for owners to easily manage things.'

  return (
    <div>
      <Meta title={pageTitle}/>
      <Header head={pageTitle} description={pageDescription} />
      <CardGroup className="myCardGroup">
  <Card>
    <Card.Body>
      <Card.Title>Staff</Card.Title>
      <Card.Text>
        Manage the staff here.{' '}
      </Card.Text>
      <LinkContainer to='/staff'>
      <Button variant="primary">View options »</Button>
      </LinkContainer>
    </Card.Body>
  </Card>
  <Card>
    <Card.Body>
      <Card.Title>Movies</Card.Title>
      <Card.Text>
        Manage the movies being played.{' '}
      </Card.Text>
      <LinkContainer to='/movies'>
      <Button variant="primary">View options »</Button>
      </LinkContainer>
    </Card.Body>
  </Card>
  <Card>
    <Card.Body>
      <Card.Title>Rooms</Card.Title>
      <Card.Text>
        Manage the rooms in the theater here.
      </Card.Text>
      <LinkContainer to='/rooms'>
      <Button variant="primary">View options »</Button>
      </LinkContainer>
    </Card.Body>
  </Card>
</CardGroup>
     <CardGroup>
  <Card>
    <Card.Body>
      <Card.Title>Scheduling</Card.Title>
      <Card.Text>
        Manage the showtimes here.{' '}
      </Card.Text>
      <LinkContainer to='/scheduling'>
      <Button variant="primary">View options »</Button>
      </LinkContainer>
    </Card.Body>
  </Card>
  <Card>
    <Card.Body>
      <Card.Title>Ticket Vendor</Card.Title>
      <Card.Text>
        Manage the ticket vendor here.{' '}
      </Card.Text>
      <LinkContainer to='/tickets'>
      <Button variant="primary">View options »</Button>
      </LinkContainer>
    </Card.Body>
  </Card>
  <Card>
    <Card.Body>
      <Card.Title>Concession Stands</Card.Title>
      <Card.Text>
        Manage the concession stands here.
      </Card.Text>
      <LinkContainer to='/stands'>
      <Button variant="primary">View options »</Button>
      </LinkContainer>
    </Card.Body>
  </Card>
</CardGroup>
    </div>
  )
}

export default Home